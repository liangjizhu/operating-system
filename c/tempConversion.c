#include <stdio.h>
#include <ctype.h>

int main(){
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);


    if (unit == 'C'){
        printf("The temp is currently in C");
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp*9/5) + 32;
        printf("\nThe temp in Farenheit is %.1f", temp);
    }
    else if (unit == 'F'){
        printf("The temp is currently in F");
        printf("\nEnter the temp in Farenheit: ");
        scanf("%f", &temp);
        temp = (temp-32)*5/9;
        printf("\nThe temp in Celsius is %.1f", temp);
    }
    else{
        printf("Please enter C or F");
    }

    return 0;
}