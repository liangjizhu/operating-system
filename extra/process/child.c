#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv){
    int pid;
    pid = fork();
    if (pid == 0){
        printf("Number %s con Pid: %d  \n", argv[1], getpid());
        sleep(2);
    }
    else if (pid > 0){
        printf("Parent process\n");
    }
    else {
        perror("Error in creating child process");
    }
}