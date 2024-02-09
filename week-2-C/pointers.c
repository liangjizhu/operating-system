#include <stdio.h>
#include <string.h>

void intercambiar(int *x, int *y){
    int r;
    r = *x;
    *x = *y;
    *y = r;
}

int main(){
    int a = 10, b = 20;
    char *nombre[10];
    printf("Nombre:\n");
    printf("a=%d, b=%d\n", a, b);
    intercambiar(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
