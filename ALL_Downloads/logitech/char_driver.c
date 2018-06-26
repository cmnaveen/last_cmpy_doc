#include<linux/init.h>
#include<linux/module.h>
#include<linux/fs.h>
#include<linux/cdev.h>
#include<asm/uaccess.h>
#include<linux/slab.h>
#include<linux/sched.h>
#include<linux/device.h>

MODULE_LICENSE("GPL");

//constants
#define F_MINOR 12
#define NO_DEVS 1 // NO OF DEVICE NUMBERS 

// function declarations for syscall  definations 

int my_open(struct inode *inode , struct file *filep);
int my_relese( 


