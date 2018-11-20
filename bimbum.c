/* Scrivere un programma che, per ogni numero compreso fra 1 e
100, scriva:
- "bim" se il numero è divisibile per 3;
- "bum" se il numero è divisibile per 5;
- "bimbum" se il numero è divisibile per 3 e per 5;
- altrimenti, il numero stesso.
*/




#include <stdio.h>

main() {
  int i;
  for (i = 1; i <= 100; i++) {
    if (i % 3 == 0 && i % 5 == 0)
      printf("bimbum ");
    else if (i % 3 == 0)
      printf("bim ");
    else if (i % 5 == 0)
      printf("bum ");
    else
      printf("%d ", i);
  }
  printf("\n");
}