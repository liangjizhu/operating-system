/*
Create a program that takes an integer as an input argument, declares a 10-element vector, 
initializes it with the argument, and adds the 10 elements of the vector using first for 
and then while. The results of both sums will be printed on the screen.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int i;
    int sum = 0;
    // if (argc < 1){
    //     printf("Usage: <Num>");
    //     exit(-1);
    // }
    int vector[10];

    for (i=0; i < 10; i++){
        vector[i] = atoi(argv[1]);
    }

    for (i=0; i<10; i++){
        sum = sum + vector[i];
    }

    printf("Sum with for: %d\n", sum);
    i = 0;
    sum = 0;
    while (i < 10){
        sum = sum + vector[i];
        i++;
    }
    printf("Sum with while: %d\n", sum);
    return 0;
}