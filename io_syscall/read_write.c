#include <fcntl.h>
#include "tlpi_hdr.h"

#define SIZE 100

char buffer[SIZE];

int main(void)
{	
	char *buf="omega zyadav is my name. \n";
	int fd;
	fd=open("foo.txt",O_RDWR | O_APPEND);

	if(read(fd,buffer,SIZE)==-1)
		errExit("Error on read!\n");

	printf("The content of the buffer is :%s\n",buffer);

	if(write(fd,buf,strlen(buf))==-1)
		errExit("Error in write. \n");

	close(fd);

	return 0;
}
