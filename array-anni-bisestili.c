/* Scrivere un programma che:
1) crei un array a con gli interi compresi fra 1900 e 2100;
2) crei un secondo array b con gli elementi di a che
   rappresentano anni bisestili
3) stampi il contenuto di b.
*/




#include <stdio.h>
#define PRIMO 1000
#define ULTIMO 3000

int bisestile(int anno) {
  return anno % 400 == 0 || anno % 4 == 0 && anno % 100 != 0;
}

int main(void) {
  int a[ULTIMO - PRIMO + 1], b[ULTIMO - PRIMO + 1], i, dl;
  // inserimento in a di tutti gli interi fra 1900 e 2100 (ForEach)
  for (i = 0; i <= ULTIMO - PRIMO; i++) {
    a[i] = PRIMO + i;
  }
  // inserimento in b di tutti gli elementi di a che rappresentano anni
  // bisestili (Filter)
  dl = 0;
  for (i = 0; i <= ULTIMO - PRIMO; i++)
    if (bisestile(a[i])) {
      b[dl] = a[i];
      dl++;
    }
  // stampa di b (ForEach)
  for (i = 0; i < dl; i++)
    printf("%d ", b[i]);
  printf("\n");
}