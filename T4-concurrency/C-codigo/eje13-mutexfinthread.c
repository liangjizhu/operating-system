/* Programa sencillo para ver como funcionan los mutex.
 * el programa principal que crea 4 threads y espera hasta que han terminado todos
 * Lo normal ser�a que el main hiciera un pthread_join, pero lo hacemos con mutex para que se vea como utilizarlos*/
#include <stdio.h>
#include <pthread.h>
#define TRUE 1
#define FALSE 0
#define NUMTHREADS 4


pthread_mutex_t m=PTHREAD_MUTEX_INITIALIZER;
pthread_attr_t attr;
int hijosVivos;

void *f( void *n){
	int n_local,*p;

        p=(int *)n;
        n_local=*p;
	printf ("Creado TH:n_local %d (time:%d)\n",n_local,time(NULL));
sleep (4);
	pthread_mutex_lock (&m);
        hijosVivos --;
	printf ("FIN TH:n_local %d (time:%d)\n",n_local,time(NULL));
	pthread_mutex_unlock (&m);
	pthread_exit(NULL);
}

int main (){
	pthread_t thid;
	int n=33,i,fin;

      pthread_mutex_init(&m, NULL); //inicializo el mutex con los atributos por defecto
      //inicializo los atributos del thread
      pthread_attr_init (&attr);
      pthread_attr_setdetachstate (&attr, PTHREAD_CREATE_DETACHED);
      hijosVivos=NUMTHREADS;
      for (i=1; i<=NUMTHREADS; i++){
	pthread_create (&thid, &attr, f, &i);
        sleep(1);  //espero a quese cree el thread, aunque esta no es la forma adecuada lo normalser�a usar mutex y varcondicionales
      }
      fin=FALSE;
      while (!fin){ 
	pthread_mutex_lock (&m);
	  if (hijosVivos ==0) fin =TRUE;
	pthread_mutex_unlock (&m);
      }
      printf ("Han terminado todos los threads \n");
}

