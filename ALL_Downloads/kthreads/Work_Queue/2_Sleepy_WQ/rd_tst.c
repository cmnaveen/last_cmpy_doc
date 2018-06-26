
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <stdlib.h>

#define FLGS		O_RDONLY
#define DMODE		0
#define SZ		1024


void sig( int signum )
{
	fprintf (stderr,"In sig: signum=%d\n", signum);
}

char buf[SZ];
int main(int argc, char **argv)
{
	int fd,n;
	struct sigaction act;
	
	if( argc==1 ) {
		fprintf(stderr,"Usage: %s device_file\n", argv[0]);
		exit(1);
	}

	act.sa_handler = sig;
	act.sa_flags = SA_RESTART;
	sigemptyset (&act.sa_mask);
	if ((sigaction (SIGINT, &act, 0)) == -1) {
		perror("sigaction"), exit (1);
	}	

	if( (fd=open(argv[1],FLGS,DMODE)) == -1)
		perror("open"),exit(1);
	printf("device opened: fd=%d\n",fd);

	// test reading..
	n=read(fd,buf,SZ);
	if( n < 0 ) { perror("read failed");close(fd);exit(1);}
	buf[n]='\0';

	printf("sleepy [%d]:: read %d bytes: buf is: %s\n",getpid(),n,buf);
        close(fd);
	exit(0);       
}

// end rd_tst.c
