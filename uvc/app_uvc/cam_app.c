#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>

int main (int argc, char *argv[])
{
	int fd;


	fd = open ("/dev/vedio9", O_RDWR);

	if(fd < 0) {
		perror("unable to open the device");
	} else {
		printf("file opened successfully %d \n", fd);
	}

	printf ("pid is : %d \n", getpid());	

	ioctl (fd, getpid(), 1);	// for stream on, sending value 1

	sleep (5);			// Module will capture for no of seconds

	ioctl (fd, getpid(), 0);	// for stream off, sending value 0

	close (fd);

	return 0;
}
