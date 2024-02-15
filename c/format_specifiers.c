#include <stdio.h>

int main(){
    float item1 = 5.99;
    printf("Item 1: $%3.2f\n", item1);
    printf("Item 1: $%3f\n", item1);
    printf("Item 1: $%-3.2f\n", item1);
}