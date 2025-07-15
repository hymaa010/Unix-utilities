#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc,char* argv[]){
	char buff[100];
	if(argc<2)
	{
		printf("please enter a file name\n");
		return -1;
	}
	else 
	{
		int fd=open(argv[1],O_RDONLY);
		int numread;
		if(fd<0)
		{
			printf("could not open a file\n");
			exit(-2);
		}
		while((numread = read(fd,buff,100))>0)
		{
			if(write(1,buff,numread)<0)
			{
				printf("write faild!\n");
			}
		}
		close(fd);
	}
	return 0;
	
}
