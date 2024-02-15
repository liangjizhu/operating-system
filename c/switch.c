#include <stdio.h>

int main(){
    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("perfect");
            break;
        case 'B':
            printf("You did good!");
            break;        
        case 'C':
            printf("You did okay");
            break;
        case 'D':
            printf("You are a shit");
            break;
        case 'F':
            printf("YOU FAILED!");
            break;
        default:
            printf("Please enter a letter!");
    }
}