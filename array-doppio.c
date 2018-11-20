/*
Scrivere un programma che assegni ad ogni elemento di un vettore
il doppio dell’elemento nella stessa posizione di un altro vettore,
della stessa dimensione.
*/



#include <stdio.h>
#define DIM 5
int main(void) {
  int i, a[] = {2, 4, 1, 6, 2}, b[DIM];

  for (i = 0; i < DIM; i++) {
    b[i] = 2 * a[i];
  }
  return 0;
}