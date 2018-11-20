/*
Scrivere un programma che richieda all’utente 5 numeri, e poi
stampi una riga contenente l’uguaglianza fra l’espressione prodotto
dei cinque numeri inseriti e il risultato della moltiplicazione. Ad
esempio:
*/



#include <stdio.h>
#define DIM 5

int main() {
  int a[DIM] = {2, 4, 5, 3, 2}, i, s;
  s = 1;  // inizializzazione accumulatore
  for (i = 0; i < DIM; i++)
    s = s * a[i]; /* aggiornamento accumulatore
        al risultato dell'operazione su se
        stesso (s) e l'elemento corrente (a[i]) */
  printf("%d\n", s);
}