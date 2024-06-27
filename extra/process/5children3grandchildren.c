#include <stdlib.h>
#include <stdio.h>

int main(){
    int pid, i, j;
    for (i = 0; i < 5; i++){
        pid = fork();
        if (pid==0){
            printf("Child %d, pid: %d\n", i, getpid());
            for (j = 0; j < 3; j++){
                pid = fork();
                if (pid==0){
                    printf("Grandchild %d, pid: %d, child %d, pid: %d\n", j, getpid(), i, getppid());
                    exit(0);
                }
            }
            for (j = 0; j < 3; j++){
                wait(NULL);
            }
        }
        else{
            wait(NULL);
        }
    }
    for (i = 0; i < 5; i++){
        wait(NULL);
    }
}