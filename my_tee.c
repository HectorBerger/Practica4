#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>


int main ( int argc, char *argv[] ){
	int fd;
	//char filename=strcat("../"+argv[0]+"/";
	if (argc>1){
		fd=open(argv[0], O_RDWR | O_CREAT, 0644);
		if (fd==-1){
			perror("[-]");
			exit;
		}
	}
	close(fd)
}
