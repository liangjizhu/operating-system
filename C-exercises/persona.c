/*
Create a program that takes a name and an age as arguments and prints them to the screen. 
If the arguments are not there you should print a command format message and exit.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv){
    char name[32];
    int age;

    if (argc < 2){
        printf("Usage: persona <name> <age>");
        exit(-1);
    }

    strcpy(name, argv[1]);
    age = atoi(argv[2]);

    printf("Name: %s, Age: %d \n", name, age);
    return 0;


}