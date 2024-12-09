#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>


int main ( int argc, char *argv[] ){
	int fd;
	if (argc>1){
		fd = open(argv[1], O_RDWR | O_CREAT, 0644);
		if (fd==-1){
			perror("[-]");
			exit(-1);
		}
		close(fd);
	}
}
