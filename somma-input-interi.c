#include <stdio.h>
main() {
  int n, somma = 0, i;
  for (i = 0; i < 5; i++) {
    printf("inserisci un numero\n");
    scanf("%d", &n);
    somma = somma + n;
  }
  printf("%d\n", somma);
}