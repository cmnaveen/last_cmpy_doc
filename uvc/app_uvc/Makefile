obj-m:=chr_ioctl.o

dummy:
	make -C /lib/modules/`uname -r`/build M=`pwd` modules
	gcc -o app_ioctl app_ioctl.c -Wall

clean:
	make -C /lib/modules/`uname -r`/build M=`pwd` clean
	rm app_ioctl

