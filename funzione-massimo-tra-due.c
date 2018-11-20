/*
Scrivere una funzione massimo che restituisca il massimo dei suoi
due argomenti.
*/




#include <stdio.h>

float massimo(float a, float b) {
  if (a >= b)
    return a;
  else
    return b;
}

int main(void) {
  printf("%f\n", massimo(2.4, 3.2));
  printf("%f\n", massimo(3.4, 3.2));
  printf("%f\n", massimo(2.4, 2.4));
  return 0;
}