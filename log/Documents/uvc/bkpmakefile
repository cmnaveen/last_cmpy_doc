#INCLUDE_DIR =	-I$(src)/linux-headers-4.4.0-34/drivers/media/v4l2-core/
#					-I$(src)/linux-headers-4.4.0-34/drivers/media/platform/vsp1/

#ccflags-y :=	$(INCLUDE_DIR)
#linux-headers-4.4.0-34
#ccflags-y += -I $(src)/linux-headers-4.4.0-34/drivers/media/v4l2-core/
#ccflags-y += -I $(src)/linux-headers-4.4.0-34/drivers/media/platform/vsp1/
#ifeq ($(CONFIG_MEDIA_CONTROLLER),y)
#uvcvideo-objs	:= uvc_driver.o uvc_queue.o uvc_v4l2.o uvc_video.o uvc_ctrl.o  \
#		  uvc_status.o uvc_isight.o uvc_debugfs.o
#uvcvideo-objs	+= uvc_entity.o
#endif
#obj-m += uvcvideo.o







#INC_DIR =../../dvb-core/

#SRC_DIR = -I$(src)/include/media/ -I/usr/src/linux-4.15.6/drivers/media/
#SRC_DIR = -I$(src)/include/media/ -I./drivers/media/
#SRC_DIR = -I$(src)/linux-headers-4.4.0-34/drivers/media/v4l2-core/
#ccflags-y += -I$(src)/../include/media/


#ccflags-y += -I$(src)/../drivers/media
#INC_DIR 	+= -I$(src)../drivers/media/ -I$(src)../include/uapi/linux/usb/
#INC :=-I/home/naveen/naveenreddy/uvc_change/all/drivers/media/usb/dvb-usb/

#module:







uvcvideo-objs  := uvc_driver.o uvc_queue.o uvc_v4l2.o uvc_video.o uvc_ctrl.o \
	         uvc_status.o uvc_isight.o uvc_debugfs.o uvc_entity.o


obj-m += uvcvideo.o


INC_DIR	+= -I$(src)/./include/media/ -I$(src)./drivers/media/ -I$(src)./include/uapi/linux/usb/
SRC_DIR = -I$(src)/./include/media/ -I$(src)./drivers/media/

all :
	   
	make -C /lib/modules/$(shell uname -r)/build  $(INC_DIR) $(SRC_DIR) M=$(PWD) modules
		#   make -C /lib/modules/$(shell uname -r)/build  $(ccflags)  M=$(PWD) modules
clean:
	#make -C /lib/modules/$(shell uname -r)/build $(ccflags) M=$(PWD) clean
	make -C /lib/modules/$(shell uname -r)/build $(INC_DIR) $(SRC_DIR) M=$(PWD) clean



