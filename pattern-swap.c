#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);

  {
    /* E’ necessario usare una terza variabile per salvare il contenuto della
    variabile a prima che venga sovrascritta con il valore di b.
    */
    int temp = b;
    b = a;
    a = temp;
  }

  printf("%d %d\n", a, b);
}