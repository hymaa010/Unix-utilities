#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc,char* argv[]){
	char cwd[1024];
	if(getcwd(cwd,1024)!= NULL)
		printf("%s\n",cwd);
	else {
		perror("Error in getcwd()");
		return -1;
	}
	return 0;
	
}
