/* Stampare tutti i numeri primi minori o uguali a un numero
richiesto all’utente.
*/



#include <stdio.h>

main() {
  int i, n, pot_primo, massimo;
  scanf("%d", &massimo);

  if (massimo >= 2) {
    printf("2 ");
    for (n = 3; n <= massimo; n += 2) {
      pot_primo = 1;
      i = 3;
      while (pot_primo && i * i <= n) {
        if (n % i == 0)
          pot_primo = 0;
        i += 2;
      }
      if (pot_primo)
        printf("%d ", n);
    }
  }
  printf("\n");
}