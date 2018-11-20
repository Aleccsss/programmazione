/* Scrivere un programma che proceda come per stampare la tavola
pitagorica di lato 10, ma fermandosi dopo aver stampato il primo
numero maggiore di 50.
*/




#include <stdio.h>

main() {
  int i, j;

  for (i = 1; i <= 10; i++) {
    for (j = 1; j <= 10; j++) {
      printf("%3d ", i * j);
      if (i * j > 50)
        goto finito;
    }
    printf("\n");
  }
finito:
  printf("Finito\n");
}