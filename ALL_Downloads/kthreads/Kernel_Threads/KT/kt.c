
#include <linux/module.h>
#include <linux/sched.h>
#include <linux/jiffies.h>
#include <linux/kthread.h>
#include <linux/delay.h>

#define seconds_to_jiffies(sec) (cputime_to_jiffies(secs_to_cputime(sec)))

static struct task_struct *sender_thread = NULL;

static int my_sender_thread (struct st *q)
{
	printk ("name: %s PID: %d TGID: %d\n", current->comm, current->pid, current->tgid);
	while(1)
	{
		printk("Hi I am kernel thread!=%d\n",q->data);
		//mdelay(100);
		set_current_state (TASK_INTERRUPTIBLE);
		schedule_timeout(seconds_to_jiffies(3));
		schedule();
		if (kthread_should_stop())
		break;
	}
    	return 0;

}             

struct st
{
int data;
};
int x=20;


static int __init my_init (void)
{
struct st *ST;
ST->data = x;
				sender_thread = kthread_run (my_sender_thread,ST, "kernel_thread");
	printk("sender_thread=%x\n",sender_thread);

    if (IS_ERR (sender_thread)) {
        printk ("Error %ld creating thread\n",
                PTR_ERR (sender_thread));
        return -1;
    }
    printk ("Starting Kernel thread in init module\n");

    return 0;
}

static void __exit my_exit (void)
{
	printk (KERN_INFO "Exiting kernel_thread module\n");
	kthread_stop(sender_thread);
}

module_exit (my_exit);
module_init (my_init);


