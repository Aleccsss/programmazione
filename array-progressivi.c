/* Scrivere un programma che inizializzi un array di 10 elementi ai 10
numeri che seguono un numero richiesto all’utente, e poi stampi
l’array.
*/



#include <stdio.h>
#define DIM 10

int main(void) {
  int a[DIM];
  int n, i;

  // lettura di n;
  scanf("%d", &n);
  // assegnamento all'array dei valori n+1, n+2, ..., n+DIM (ForEach)
  for (i = 0; i < DIM; i++) {
    a[i] = n + i + 1;
  }
  // stampa dell'array (ForEach)
  for (i = 0; i < DIM; i++)
    printf("%d ", a[i]);
  printf("\n");
}
