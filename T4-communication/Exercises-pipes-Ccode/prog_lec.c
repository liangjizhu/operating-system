/*Programa que lee un dato de la entrada estandar y lo muestra en la salida estandar. Se utiliza en el programa tuberia2.c*/
//Debe compilarse con gcc -o prog_lec prog_lec.c
//Jos� Manuel P�rez Lobato
#include <stdio.h>

int main() {
    char buffer[90];

    scanf("%s",buffer);
    printf ("He leido:%s:\n",buffer);
}
