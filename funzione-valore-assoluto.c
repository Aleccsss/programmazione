/* Scrivere una funzione di nome valoreAssoluto che calcoli il
valore assoluto del suo parametro intero. Testarla chiamandola con
parametri attuali significativi.
*/




#include <stdio.h>

// definizione della funzione valoreAssoluto

int valoreAssoluto(int n) {
  return n >= 0 ? n : -n;
}

int main(void) {
  // chiamata di valoreAssoluto
  printf("%d\n", valoreAssoluto(-2));
  // chiamata di valoreAssoluto
  printf("%d\n", valoreAssoluto(0));
  // chiamata di valoreAssoluto
  printf("%d\n", valoreAssoluto(2));
  return 0;
}