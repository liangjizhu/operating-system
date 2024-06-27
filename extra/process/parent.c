#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char **argv){
    int pid;
    char num[10];
    for (int i = 0; i < 3; i++){
        sprintf(num,"%d",i);
        pid = fork();
        if (pid == 0){
            printf("Child number: %d with PID: %d\n", i, getpid());
            execlp("./child", "child", num, NULL);
        }
        else if (pid > 0){
            wait(NULL);
            printf("Parent process\n");
        }
        else {
            perror("Error in creating child process");
        }
    }
}