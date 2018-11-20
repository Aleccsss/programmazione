/* Scrivere un programma che stampi a video la tavola pitagorica,
cioè la tabella di 10 righe e 10 colonne tale che il numero alla riga
i e alla colonna j è il prodotto di i e j:
*/



#include <stdio.h>

main() {
  int riga, col;

  for (riga = 1; riga <= 10; riga++) {
    for (col = 1; col <= 10; col++)
      printf("%5d ", riga * col);
    printf("\n");
  }
}