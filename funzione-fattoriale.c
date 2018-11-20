/* Scrivere una funzione che calcoli il fattoriale del suo argomento
intero. Si ricorda che il fattoriale di un numero n è il prodotto di
tutti i numeri naturali compresi fra 1 e n; quindi il fattoriale si può
calcolare con un’iterazione in cui il contatore va da 1 a n e
l’accumulatore, inizialmente pari a 1, è moltiplicato via via per il
contatore.
Testare la funzione chiamandola con parametri attuali significativi.
*/




#include <stdio.h>

int fattoriale(int n) {
  int cont;
  int acc = 1;
  for (cont = 1; cont <= n; cont++)
    acc = acc * cont;
  return acc;
}

int main(void) {
  int a = 6;
  printf("%d\n", fattoriale(a));
  return 0;
}