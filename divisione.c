/* Stampare il quoziente e il resto di due numeri m e n richiesti
all’utente, usando il metodo delle sottrazioni successive.
Il quoziente è il numero di volte che è necessario sottrarre n da m
per ottenere un risultato negativo, diminuito di 1. Il resto è il
sottraendo dell’ultima sottrazione.
Ad esempio, il quoziente intero di 12 e 5 è 2 perché sottraendo 5
da 12 3 volte si ottiene un numero negativo; il resto è 2, ossia il
sottraendo della terza sottrazione.
*/



#include <stdio.h>

main() {
  int dividendo, divisore;
  int quoziente = 0;
  scanf("%d%d", &dividendo, &divisore);

  while (dividendo >= divisore) {
    dividendo = dividendo - divisore;
    quoziente++;
  }
  printf("Q: %d R:%d\n", quoziente, dividendo);
}