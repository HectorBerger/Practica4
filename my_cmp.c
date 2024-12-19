#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main ( int argc, char *argv[] ){
        int fd1;
	int fd2;
	if (argc!=3){
		printf("Ús: %s fitxer1 fitxer2\n", argv[0]);
       		exit(-1);
        }else{
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
		char buf1[1],buf2[1];
		int byte=1,linia=1;
		a=read(fd1,buf1,1);
		b=read(fd2,buf2,1);
                while ((buf1[0]==buf2[0]) && (a!=0 && b!=0)){
			byte++;
			if(buf1[0] == '\n'){
                        	linia++;
			}
			a=read(fd1,buf1,1);
                	b=read(fd2,buf2,1);
		}
		if (!(a==0 && b==0)){
			printf("%s %s differ: byte %d, line %d\n",argv[1],argv[2],byte,linia);
		}
		close(fd1);
		close(fd2);
	}
}
