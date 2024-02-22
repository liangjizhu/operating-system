#include <stdio.h>

int main(){
    // BITWISE OPERATORS = special operators used in bit level programming
    // & = AND
    // | = OR
    // ^ = XOR
    // << left shift
    // >> right shift

    // 6 = 00000110
    int x = 6;
    
    // 12 = 00001100
    int y = 12;
    
    // 0 = 00000000
    int z = 0;

    // 4 = 00000100
    z = x & y;
    printf("AND = %d\n", z);

    z = 0;

    // 14 = 00001110
    z = x | y;
    printf("OR = %d\n", z);

    z = 0;

    // 10 = 0001010
    z = x ^ y;
    printf("XOR = %d\n", z);

    // 12 = 00001100
    z = x << 1;
    printf("SHIFT LEFT = %d\n", z);

    // 24 = 00011000
    z = x << 2;
    printf("SHIFT LEFT = %d\n", z);

    // 6 = 00000110
    z = y >> 1;
    printf("SHIFT RIGHT = %d\n", z);

    // 3 = 00000011
    z = y >> 2;
    printf("SHIFT RIGHT = %d\n", z);


    return 0;
}