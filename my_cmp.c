#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main ( int argc, char *argv[] ){
        int fd1;
	int fd2;
        if (argc>2){
                fd1 = open(argv[1], O_RDONLY | O_CREAT, 0644);
                if (fd1==-1){
                        perror("[-]");
                        close(fd1);
                        exit(-1);
                }
		fd2 = open(argv[2], O_RDONLY | O_CREAT, 0644);
                if (fd2==-1){
                        perror("[-]");
                        close(fd2);
                        exit(-1);
                }
                
		
		}
	}
}
