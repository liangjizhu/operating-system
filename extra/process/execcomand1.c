#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char **argv){
    if (argc < 2){
        printf("Usage: exec-comando <comando>\n");
        exit(-1);
    }
    int pid;
    pid = fork();
    if (pid == 0){
        printf("Hijo creado, va a ejecutar el comando %s\n", argv[1]);
        execlp(argv[1], argv[1], NULL);
        printf("ERROR, aqui solo se llega si ha fallado el exec\n");
    }
    else if (pid > 0){
        wait(NULL);
        printf("FIN del padre\n");
    }
    else{
        perror("Error in creating child process");
    }
}