/* Il seguente programma mostra i quozienti interi di 100 per tutti gli
interi compresi fra 1 e 10.
*/



#include <stdio.h>

main() {
  int i = 1;
  do {
    printf("%d\n", 100 / i);
    i++;
  } while (i <= 10);
}