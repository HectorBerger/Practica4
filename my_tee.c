#include <stdio.h>
//#include <stdin.h>
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
	else{
		char buf[1];
        	ssize_t lectura;
        	ssize_t a;
		ssize_t b;
		int count;
		lectura = read(0, buf, 1);
        	while (lectura!=-1){
                	a = write(1, buf, count);
                        b = write(fd, buf, count);
                        lectura = read(0, buf, 1);
		}
	}
}
