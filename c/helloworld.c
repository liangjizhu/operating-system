#include <stdio.h>
#include <string.h>

int main (){
    char name[32];
    printf("Name:\t");
    scanf("%s", name);
    
    printf("Hello %s\n", name);
    return 0;
}