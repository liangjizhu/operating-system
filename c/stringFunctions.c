#include <stdio.h>
#include <string.h>

int main(){
    char string1[] = "Liang";
    char string2[] = "Ji";

    strlwr(string1);
    printf("Output:\t%s\n", string1);

    strupr(string1);
    printf("Output:\t%s\n", string1);

    strcat(string1, string2);
    printf("Output:\t%s\n", string1);

    strncat(string1, string2, 1);
    printf("Output:\t%s\n", string1);

    strcpy(string2, string1);
    printf("Output:\t%s\n", string2);

    strncpy(string2, string1, 1);
    printf("Output:\t%s\n", string2);

    strset(string1, '?');
    printf("Output:\t%s\n", string1);

    strnset(string2, 'X', 1);
    printf("Output:\t%s\n", string2);

    strrev(string2);
    printf("Output:\t%s\n", string2);

    int result = strlen(string1);
    printf("Stirng1 is length: %d", result);
    


}