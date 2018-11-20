/*
Scrivere un programma che inizializzi un array di 10 elementi ai
quadrati dei primi 10 numeri naturali, e poi stampi l’array.
*/


#include <stdio.h>
#define DIM 10

int main(void) {
  int a[DIM], i;
  // assegnamento all'array dei primi 10 quadrati (ForEach)
  for (i = 0; i < DIM; i++)
    a[i] = (i + 1) * (i + 1);

  // stampa dell'array (ForEach)
  for (i = 0; i < DIM; i++)
    printf("%d ", a[i]);
  printf("\n");
}
