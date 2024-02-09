/* Create a C program that declares an integer, a long int, and a float, assigns them a value, 
and prints them to the screen in different formats. Then read the two integers separated on the 
entry line by a ",".*/

#include <stdio.h>

int main(){
    int num_1 = 12;
    long int num_2 = 1671261278;
    float num_3 = 3.1415;
    printf("%ld\n", num_1);
    printf("%4ld\n", num_1);
    printf("%4d\n", num_1);
    printf("%-4ld\n", num_1);
    printf("%9.6ld\n", num_1);
    printf("%99d\n", 111);

    printf("Enter two numbers: ");
    return 0;

}