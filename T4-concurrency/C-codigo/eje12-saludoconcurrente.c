// fichero saludoconcurrente.c
//THREADS
/* Realizar un programa que declare una funci�n imprimir y
 que le pase como par�metros 1 string a imprimir.
A continuaci�n el programa principal debe preparar los par�metros con 2 string "hola" y "mundo" y lanzar 2 threads que intenten imprimir "hola mundo" y terminar. */
// compilar con  gcc -lpthread saludoconcurrente.c
//Jes�s Carretero

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>


pthread_t thread1, thread2; /* Declaraci�n de los threads */
pthread_attr_t attr; /*atributos de los threads*/ 
pthread_mutex_t impresor=PTHREAD_MUTEX_INITIALIZER;


/* Definici�n de las funci�n imprimir */
void *imprimir (void *arg) 
{ 
  char a[12];

  pthread_mutex_lock (&impresor);
  strcpy(a, (char*)arg);

  printf("%s \n",a); 
  pthread_mutex_unlock (&impresor);

  pthread_exit (NULL); 
}


/*Funci�n main*/ 
int main (void) 
{ 
  char cadena_hola[]="Hola ";
  char cadena_mundo[]="mundo ";

  pthread_attr_init (&attr); 
  pthread_create(&thread1, &attr, imprimir, (void *)cadena_hola); 
  pthread_create(&thread2, &attr, imprimir, (void *)cadena_mundo); 
  pthread_exit (NULL); 
} 