/* Scrivere un programma che richieda all’utente un numero intero n
e cinque caratteri, dopo di che stampi cinque righe, ognuna
composta da n volte ognuno dei cinque caratteri.
*/




#include <stdio.h>

// funzione che stampa n volte il carattere c
stampaNCaratteri(int m, char ch) {
  int j;
  for (j = 0; j < m; j++)
    printf("%c", ch);
}

main() {
  int n, i;
  char a, b, c, d, e;

  scanf("%d", &n);
  scanf("%c%c%c%c%c", &a, &b, &c, &d, &e);
  for (i = 0; i < 5; i++) {
    // chiamate della funzione
    stampaNCaratteri(n, a);
    stampaNCaratteri(n, b);
    stampaNCaratteri(n, c);
    stampaNCaratteri(n, d);
    stampaNCaratteri(n, e);
    printf("\n");
  }
}