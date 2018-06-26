
#uvcvideo-objs := uvc_driver.o uvc_queue.o uvc_v4l2.o uvc_video.o uvc_ctrl.o \

#	         uvc_status.o uvc_isight.o uvc_debugfs.o uvc_entity.o



#obj-m += uvcvideo.o

#INC_DIR	+= -I$(src)/include 
#ccflags-y := -I$(src)/include 

#SRC_DIR = -I$(src)drivers/media/



#all :
#	make -C /lib/modules/$(shell uname -r)/build  $(ccflags) $(SRC_DIR) M=$(PWD) modules
	#make -C /lib/modules/$(shell uname -r)/build  $(INC_DIR) $(SRC_DIR)  M=$(PWD) modules

#clean:
#	make -C /lib/modules/$(shell uname -r)/build $(ccflags) $(SRC_DIR) M=$(PWD) clean
	#make -C /lib/modules/$(shell uname -r)/build $(INC_DIR) $(SRC_DIR) M=$(PWD)  clean

#---------------------------





#SRCS =
uvcvideo-objs := uvc_driver.o uvc_queue.o uvc_v4l2.o uvc_video.o uvc_ctrl.o  uvc_status.o uvc_isight.o uvc_debugfs.o uvc_entity.o
		drivers/media/media-device.o
		drivers/media/v4l2-core/v4l2-ioctl.o
		drivers/media/v4l2-core/v4l2-ctrls.o
		drivers/media/platform/vsp1/vsp1_drv.o
		gadget_fun/uvc_configfs.o

obj-m += uvcvideo.o

INCLUDE_DIR = -I$(src)/Include 
              #-I$(src)/Include

ccflags-y := $(INCLUDE_DIR)

#OBJS =  $(SRCS:.c=.o)

#obj-m += $(MODULE_MAME).o
#$(MODULE_MAME)-y = $(OBJS)


all:
	#make -C /lib/modules/$(shell uname -r)/build $(ccflags-y) M=$(PWD) modules
	make -C /lib/modules/$(shell uname -r)/build $(INCLUDE_DIR) M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build  $(INCLUDE_DIR) M=$(PWD) clean

