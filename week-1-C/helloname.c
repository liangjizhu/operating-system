#include <stdio.h>
#include <string.h>

int main(){
    char name[32];

    printf("Write the name: ");
    scanf("%s", &name);
    printf("Hello %s \n", name);
    return 0;
}