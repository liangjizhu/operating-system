#include <stdio.h>

// function prototype declare a function with nothing but
// we can edit it after the main function so it can be 
// executable the function
void hello(char[], int);

int main(){
    char name[] = "Liang";
    int age = 21;

    hello(name, age);

    return 0;
}

void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d old\n", age);
}