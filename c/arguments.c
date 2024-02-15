#include <stdio.h>

void birthday(char x[], int y){
    printf("\nHappy birhday dear %s!", x);
    printf("\nYou are %d years old!", y);
}

int main(){
    char name[] = "Liang";
    int age = 21;

    birthday(name, age);

    return 0;

}