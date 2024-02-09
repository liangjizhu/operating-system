#include <stdio.h>

int main (int argc, char *argv[]) {

  int i;

  printf ("Number of parameters : %d\n", argc);
 
  printf ("List of parameters \n" );
 
 for (i=0; i< argc; i++)  
    printf ("parameter %d = %s\n", i, argv[i]);

}