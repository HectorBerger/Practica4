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
		ssize_t	a,b;
		char buf1,buf2;
		int byte=1,linia=1;
		a=read(fd1,buf1,1);
		b=read(fd2,buf2,1);
                if ( || (a!=0 && b!=0)){
			byte++;
			a=read(fd1,buf1,1);
                	b=read(fd2,buf2,1);
			if(buf=="\n"){
				linia++;
			}
		close(fd1);
		close(fd2);
		printf("%c %c differ: byte %d, line %d\n",argv[0],argv[1],byte,linia);
		}
	}
}
