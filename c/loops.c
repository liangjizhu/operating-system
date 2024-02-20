#include <stdio.h>
#include <string.h>

int main(){
    // for
    // for (int i = 0; i <= 10; i++){
    //     printf("%d\n", i);
    // }
    // return 0;
    
    // while
    // char name[25];
    // printf("\nWhat's is your name?: ");
    // fgets(name, 25, stdin);
    // name[strlen(name) - 1] = '\0';
    // printf("Hello %s", name);
    // while(strlen(name) == 0){
    //     printf("You did not enter your name\n");
    //     printf("\nWhat's is your name?: ");
    //     fgets(name, 25, stdin);
    //     name[strlen(name) - 1] = '\0';
    //     printf("Hello %s", name);
    // }

    // do while
    int number = 0;
    int sum = 0;

    do {
        printf("Enter a # above 0:");
        scanf("%d", &number);
        if (number > 0){
            sum += number;
        }
    } while(number > 0);
    printf("Sum: %d", sum);
    return 0;
}