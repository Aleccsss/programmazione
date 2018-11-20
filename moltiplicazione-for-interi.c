/* Stampare il prodotto di due numeri m e n richiesti all’utente,
calcolandolo come somma di n addendi pari a m.
*/


#include <stdio.h>


int main(void) {

int n, m, i, prodotto;

prodotto = 0;

    printf("Inserisci i due numeri\n");
        scanf("%d%d", &n, &m);
    
        for ( i=0; i<=n; i++ ) {

            prodotto = m * i;
        }

        printf("%d\n", prodotto);

}