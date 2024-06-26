#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUFFERSIZE 1

int main(int argc, char *argv[]){
    int fd, nread;
    char buffer[BUFFERSIZE];
    if ((fd = open(argv[1], O_RDONLY)) < 0){
        perror("error opening a fle");
        exit(1);
    }
    while ((nread = read(fd, buffer, BUFFERSIZE)) > 0) {
        printf("%c", buffer[0]);
    }
    
    if (nread < 0){
            perror("error reading the file");
            close(fd);
            exit(1);
        }
        
    close(fd);
    return 0;
}