/* Scrivere una funzione che restituisca il massimo dei suoi tre
argomenti, usando la funzione massimo definita al punto
precedente e senza condizionali.
*/



#include <stdio.h>

float massimo(float a, float b) {
  if (a >= b)
    return a;
  else
    return b;
}

float m3(float a, float b, float c) {
  return massimo(massimo(a, b), c);
}

int main(void) {
  printf("%f\n", m3(4.0, 2.4, 3.2));
  printf("%f\n", m3(3.4, 4.0, 3.2));
  printf("%f\n", m3(2.4, 2.4, 4.0));
  return 0;
}