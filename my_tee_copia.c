#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>


int main ( int argc, char *argv[] ){
	int fd;
	//char filename=strcat("../"+argv[0]+"/";
	if (argc>1){
		fd=open(argv[1], O_RDWR | O_CREAT, 0644);
		if (fd==-1){
			perror("[-]");
			exit;
		}
		else {
			char buf[1];
			ssize_t lectura = read(int 0, void *buf, size_t 1);
			while (lectura!=-1){
				ssize_t write(int 1, void *buf, size_t count);
				ssize_t a = write(int fd, void *buf, size_t count);
				ssize_t lectura = read(int 0, void *buf, size_t 1);
}
close(fd);
}
}
