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
			close(fd);
			exit(-1);
		}
		char buf[1];
        	ssize_t lectura,a,b;
		lectura = read(0, buf, 1);
        	while (lectura>0){
			a = write(1, buf, 1);
                       	b = write(fd, buf, 1);
                	lectura = read(0, buf, 1);
			if (a==-1 || b==-1){
                        	perror("[-]");
                        	exit(-1);
			}
		}
		if (lectura==-1){
                        perror("[-]");
                        exit(-1);
        	}
		close(fd);
	}
}

