#include <stdio.h>
#include <unistd.h>

int main(){
    int pid;
    pid = fork();
    if (pid == 0){
        printf("I am the Child\n");
        printf("Goodbye child, pid=%d, ppid=%d\n", getpid(), getppid());

    }
    else if (pid > 0){
        sleep(1);
        printf("I am the father\n");
        printf("Goodbye father, pid=%d, ppid=%d\n", getpid(), getppid());
    }
    else{
        perror("Error in creating child process");
    }
}
