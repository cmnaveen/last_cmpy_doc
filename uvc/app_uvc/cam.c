#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/usb.h>
#include <linux/slab.h>
#include <linux/debugfs.h>
#include <media/v4l2-common.h>
#include <media/v4l2-device.h>
#include <linux/videodev2.h>
#include <media/v4l2-ctrls.h>


struct usb_class_driver class;
struct dentry *debug_file;
struct dentry *debug_dir;
struct file *fp;
int glob = 1;
loff_t pos = 0 ;
mm_segment_t oldfs ;

MODULE_LICENSE ("Dual BSD/GPL");
MODULE_AUTHOR("CM Naveen Reddy");                                                  
MODULE_DESCRIPTION("USB Registration Driver");                                  


struct usb_camera_device {
	struct usb_device *udev;                                                    
	struct usb_interface *intf;                                                 
	int intfnum;                                                                
	char name[32];

	struct mutex lock;
	struct v4l2_device vdev;

	struct usb_host_endpoint *ep;                                           
	struct urb *urb[5];
	int urb_size;
	__u8 *status;
}*dev;

void streamon (void)
{
			printk (KERN_ERR "Failed to submit URB\n");
}

void streamoff (void)
{

			printk (KERN_ERR "Failed to unlink URB\n");

	filp_close (fp,NULL);
}



int device_open(struct inode *inode, struct file *filep)
{
	printk(KERN_INFO "Open successful\n");

	return 0;
}

long stream_ioctl(struct file *fp, unsigned int pid, unsigned long num )
{
	struct module *my_module = THIS_MODULE;

	printk(KERN_INFO "module name %s\n", my_module->name);

	if (num == 1) 
		streamon ();
	else if (num == 0) 
		streamoff ();

	return 0;
}

const struct file_operations fops = {                            
	.owner = THIS_MODULE,
	.open = device_open,
	.unlocked_ioctl = stream_ioctl
};

static int usb_probe(struct usb_interface *interface, 
		const struct usb_device_id *id)
{
	class.name = "usb/camera%d";                                           
	class.fops = &fops;                                             

	fp = filp_open("/home/naveen/sample.yuv", O_RDWR |  O_LARGEFILE, 0);                                        
	if (fp)                                                           
		printk (KERN_INFO "file opened with fd = %p\n", fp);                   
	else                                                                    
		printk ("File opened failed\n"); 
return 0;
}

static void usb_disconnect(struct usb_interface *interface)                       
{
	streamoff ();

	printk (KERN_INFO "logi camera removed\n");
} 

static struct usb_driver usb_camera =
{
	.name = "usb_camera",
	.probe = usb_probe,
	.disconnect = usb_disconnect,
};

static int __init usb_init (void)
{

	return usb_register (&usb_camera);
}

static void __exit usb_exit (void)
{

	usb_deregister (&usb_camera);
}

module_init (usb_init);
module_exit (usb_exit);
