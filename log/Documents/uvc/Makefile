
uvcvideo-objs  := uvc_driver.o uvc_queue.o uvc_v4l2.o uvc_video.o uvc_ctrl.o \
	         uvc_status.o uvc_isight.o uvc_debugfs.o uvc_entity.o  


obj-m += uvcvideo.o
#KDIR=/home/naveen/Videos/linux-4.15.6/
INCDIR	+= -I/include/media/ -I/media/ -I/include/uapi/linux/usb/
SRCDIR = -Iinclude/media/ -Imedia/

#INC_DIR	+= -I$(src)/include/media/asm/ -I$(src)/include/media/media -I$(src)drivers/media/ -I$(src)include/uapi/linux/usb/
#SRC_DIR = -I$(src)/include/media/ -I$(src)drivers/media/



all :
	make -C /lib/modules/$(shell uname -r)/build  $(INCDIR) $(SRCDIR) M=$(PWD) modules
#	make -C /lib/modules/$(shell uname -r)/build   M=$(shell pwd) modules
		#   make -C /lib/modules/$(shell uname -r)/build  $(ccflags)  M=$(PWD) modules
clean:
	#make -C /lib/modules/$(shell uname -r)/build $(ccflags) M=$(PWD) clean
	make -C /lib/modules/$(shell uname -r)/build $(INCDIR) $(SRCDIR) M=$(PWD) clean


