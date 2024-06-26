

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    char buffer[] = "Hello, World!";
    char buffer2[] = "Help me!";
    int fd = open("file.txt", O_CREAT | O_RDWR, 0666);
    if (fd < 0){
        perror("error creating the file");
        exit(1);
    }
    if ((write(fd, buffer, 14)) < 0) {
        perror("error writing to the file");
        exit(1);
    }

    if ((lseek(fd, 100, SEEK_CUR)) < 0){
        perror("error seeking the file");
        exit(1);
    }
    if ((write(fd, buffer2, 9)) < 0) {
        perror("error writing to the file");
        exit(1);
    }
    if ((close(fd)) < 0) {
        perror("error closing the file");
        exit(1);
    }

}