/* Scrivere un programma che stampi a video un rettangolo composto
di asterischi di lati m e n richiesti all’utente, usando una funzione
riga che stampi una riga di m asterischi.
*/




#include <stdio.h>
// definizione di funzione
riga(int m) {
  int i;
  for (i = 0; i < m; i++)
    printf("*");
  printf("\n");
}

rettangolo(int base, int altezza) {
  int i;
  for (i = 0; i < altezza; i++)
    riga(base);
}

main() {
  int m, n;
  int i;
  scanf("%d%d", &m, &n);
  rettangolo(m, n);
}