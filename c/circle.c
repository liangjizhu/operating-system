#include <stdio.h>

int main(){
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nRadius: ");
    scanf("%lf", &radius);

    circumference = 2* PI * radius;
    area = PI * radius * radius;

    printf("Cirumference: %lf", circumference);
    printf("\nArea: %lf", area);
}