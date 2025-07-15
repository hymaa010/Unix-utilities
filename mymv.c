#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc,char* argv[]){
	char buff[100];
	int src,dst,nread;
	if(argc<3){
		printf("Usage: %s <source> <destination>",argv[0]);
		return -1;
	}

	src=open(argv[1],O_RDONLY);
	if(src<0){
		perror("Error opening source file");
		return -2;
	}
	dst=open(argv[2],O_WRONLY | O_CREAT | O_TRUNC , 0644);
	if(dst<0){
		perror("Error opening destination file");
		close(src);
		return -2;
	}
	while((nread=read(src,buff,100))>0){
		if(write(dst,buff,nread)!=nread){
			perror("Write error");
			close(src);
			close(dst);
			return -4;
		}
	}
	close(src);
	close(dst);
	unlink(argv[1]);
	return 0;
}
