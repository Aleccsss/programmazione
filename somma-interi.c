#include <stdio.h>

main() {
  int i, n, somma = 0;
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
    somma = somma + i;
  printf("%d\n", somma);
}