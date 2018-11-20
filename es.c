




#include <stdio.h>


int main(void) {

    int n, i, j;
    char a, b, c, d, e;

        printf("Inserisci un numero e cinque caratteri\n");
            scanf("%d%c%c%c%c%c", &n, &a, &b, &c, &d, &e);
        
        for ( i=0; i <= 5; i++ ) {
            
            for( j=0; j <= n; j++ ) {

                printf("%c%c%c%c%c", a, b, c, d, e);
            }

        }

        printf("\n");

}