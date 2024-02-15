#include <stdio.h>
#include <stdbool.h>

int main(){
    // single character %c
    char a = 'C';

    // array of characters %s
    char b[] = "Bro";

    // 4 bytes (32 bits of precision) 6-7 digits %f
    float c = 3.141592;

    // 8 bytes (64 bits of precision) 15-16 digits %lf
    double d = 3.141592653589793;

    // 1 byte (true or false) %d
    bool e = true;

    // 1 byte (-127 to +127) %d or %c
    char f = 100;

    // 1 byte (0 to +255) %d or %c
    unsigned char g = 255;

    // 2 bytes (-32768 to 32767) %d
    short int h = 32767;

    // 2 bytes (0 to 65535) %d
    unsigned short int i = 65535;

    // 4 bytes (-2147483648 to +2147483647) %d
    int j = 2147483648;

    // 4 bytes (0 to +4294967295) %u
    unsigned int k = 4294967295U;

    // 8 bytes (-9 quintillion to +9 quintillion) %lld
    long long int l = 9223372036854775807;

    // 8 bytes (0 to +18 quintillion) %llu
    unsigned long long int m = 18446744073709551615U;

    printf("%c\n", a);
    printf("%s\n", b);
    printf("%0.15f\n", c);
    printf("%0.15lf\n", d);
    printf("%d\n", e);
    printf("%d\n", f);
    printf("%d\n", g);
    printf("%d\n", h);
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%u\n", k);
    printf("%lld\n", l);
    printf("%llu\n", m);


}
