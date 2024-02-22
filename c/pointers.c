#include <stdio.h>

void printAge(int *pAge){
    printf("You are %d years old\n", *pAge);
}

int main(){
    // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    //           some tasks are performed more easily with pointers
    //           * = indirection operator (value at address)
    
    int age = 21;

    // good practice to assign NULL if declaring a pointer
    int *pAge = NULL;
    pAge = &age;

    printf("Address of age: %p\n", &age);
    printf("Value of pAge: %p\n", pAge);

    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge));
    
    printf("Value of age: %d\n", age);
    // dereferencing
    printf("Value at stored address: %d\n", *pAge);

    printAge(pAge);

    return 0;
}