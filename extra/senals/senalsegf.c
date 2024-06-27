#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

void capture_signal(int segnal){
    printf("Error: Segmentation fault\n");
    signal(SIGSEGV, SIG_DFL);
    printf("Recover default treatment\n");
}

int main(void){
    int *p;
    signal(SIGSEGV, capture_signal);
    printf("Handler placed\n");
    p = 0;
    printf("Writing 0 to the variable\n");
    *p = 5;
    printf("%d\n", *p);
    return 0;
}