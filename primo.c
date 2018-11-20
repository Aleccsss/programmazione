/* Verificare se un numero, richiesto all’utente, è primo, ossia se non
ha divisori interi a parte 1 e se stesso.
*/




#include <stdio.h>

main() {
  int i, n, pot_primo = 1;
  scanf("%d", &n);

  if (n > 2 && n % 2 == 0)
    pot_primo = 0;
  else {
    i = 3;
    while (pot_primo && i * i <= n) {
      if (n % i == 0)
        pot_primo = 0;
      i += 2;
    }
  }
  if (pot_primo)
    printf("Primo\n");
  else
    printf("Non primo\n");
}