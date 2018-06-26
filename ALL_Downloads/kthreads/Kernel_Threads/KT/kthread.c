
#include <linux/module.h>
#include <linux/sched.h>
#include <linux/jiffies.h>
#include <linux/kthread.h>
#include <linux/delay.h>

#define seconds_to_jiffies(sec) (cputime_to_jiffies(secs_to_cputime(sec)))


/**
 * kthread_create_on_node - create a kthread.
 * @threadfn: the function to run until signal_pending(current).
 * @data: data ptr for @threadfn.
 * @node: task and thread structures for the thread are allocated on this node
 * @namefmt: printf-style name for the thread.
 *
 * Description: This helper function creates and names a kernel
 * thread.  The thread will be stopped: use wake_up_process() to start
 * it.  See also kthread_run().  The new thread has SCHED_NORMAL policy and
 * is affine to all CPUs.
 *
 * If thread is going to be bound on a particular cpu, give its node
 * in @node, to get NUMA affinity for kthread stack, or else give NUMA_NO_NODE.
 * When woken, the thread will run @threadfn() with @data as its
 * argument. @threadfn() can either call do_exit() directly if it is a
 * standalone thread for which no one will call kthread_stop(), or
 * return when 'kthread_should_stop()' is true (which means
 * kthread_stop() has been called).  The return value should be zero
 * or a negative error number; it will be passed to kthread_stop().
 *
 * Returns a task_struct or ERR_PTR(-ENOMEM) or ERR_PTR(-EINTR).
 */
struct task_struct *kthread_create_on_node(int (*threadfn)(void *data),
								void *data, int node,const char namefmt[],...)
{
				DECLARE_COMPLETION_ONSTACK(done);
				struct task_struct *task;
				struct kthread_create_info *create = kmalloc(sizeof(*create),
												GFP_KERNEL);

				if (!create)
								return ERR_PTR(-ENOMEM);
				create->threadfn = threadfn;
				create->data = data;
				create->node = node;
				create->done = &done;

				spin_lock(&kthread_create_lock);
				list_add_tail(&create->list, &kthread_create_list);
				spin_unlock(&kthread_create_lock);

				wake_up_process(kthreadd_task);
				/*
				 * 	 * Wait for completion in killable state, for I might be chosen by
				 * 	 	 * the OOM killer while kthreadd is trying to allocate memory for
				 * 	 	 	 * new kernel thread.
				 * 	 	 	 	 */
				if (unlikely(wait_for_completion_killable(&done))) {
								/*
								 * 		 * If I was SIGKILLed before kthreadd (or new kernel thread)
								 * 		 		 * calls complete(), leave the cleanup of this structure to
								 * 		 		 		 * that thread.
								 * 		 		 		 		 */
								if (xchg(&create->done, NULL))
												return ERR_PTR(-EINTR);
								/*
								 * 		 * kthreadd (or new kernel thread) will call complete()
								 * 		 		 * shortly.
								 * 		 		 		 */
								wait_for_completion(&done);

				}
				task = create->result;
				if (!IS_ERR(task)) {
								static const struct sched_param param = { .sched_priority = 0  };
								va_list args;

								va_start(args, namefmt);
								vsnprintf(task->comm, sizeof(task->comm), namefmt, args);
								va_end(args);
								/*
								 * 		 * root may have changed our (kthreadd's) priority or CPU mask.
								 * 		 		 * The kernel thread should not inherit these properties.
								 * 		 		 		 */
								sched_setscheduler_nocheck(task, SCHED_NORMAL, &param);
								set_cpus_allowed_ptr(task, cpu_all_mask);

				}
				kfree(create);
				return task;

}
EXPORT_SYMBOL(kthread_create_on_node);




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


