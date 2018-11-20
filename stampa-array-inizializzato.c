/* Scrivere un programma che definisca un array inizializzato come
negli esempi in questa diapositiva, e poi ne stampi gli elementi,
uno su ogni riga.
*/



#include <stdio.h>

#define DIM 5

int main(void) {
  // definizione e inizializzazione array
  int a[DIM] = {2, 4, 6, 1, 2};
  int i;
  // stampa di tutti gli elementi
  for (i = 0; i < DIM; i++)
    printf("%d\n", a[i]);
  return 0;
}