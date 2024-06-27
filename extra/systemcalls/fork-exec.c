#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(){
    pid_t pid;
    pid = fork();
    if (pid == 0){
        printf("I am the child");
        printf("El id del proceso es %d y el valor devuelto es %d\n", getpid(), pid);
        execl("/bin/ls", "ls", "-l", (char *)NULL);
    }
    else if (pid == -1){
        perror("error in creating child process");
        exit(1);
    }
    else{
        printf("El id del proceso es %d y el valor devuelto es %d\n", getpid(), pid);
        printf("I am the father\n");
        wait(NULL);
    };
    return 0;
}