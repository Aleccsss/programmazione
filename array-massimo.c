/*
Il seguente programma richiede all’utente DIM numeri interi e li
salva in un array; dopo di che stampa l’indice dell’array contenente
l’intero massimo.
*/



#include <stdio.h>
#define DIM 5

main() {
  int a[DIM], i, m;

  for (i = 0; i < DIM; i++)
    scanf("%d", &a[i]);
  m = 0; // accumulatore
  for (i = 1; i < DIM; i++)
    if (a[i] > a[m]) //indice dell'aggiornamento
      m = i;  //aggiornamento

  printf("%d\n", m);
}