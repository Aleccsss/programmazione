/* Scrivere un programma che stampi 5 righe di 20 asterischi. In
particolare, definire una funzione di nome star che stampi 20
asterischi con un ciclo for, e chiamarla 5 volte con un ciclo for.
*/




#include <stdio.h>

// definizione funzione
star() {
  // corpo della funzione
  int i;
  for (i = 0; i < 20; i++)
    printf("*");
  printf("\n");
}

main() {
  int j;
  for (j = 0; j < 5; j++) {
    // chiamata di funzione
    star();
  }
}