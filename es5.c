/*
Si scriva un programma che legga da tastiera 5 numeri e stampi a video il maggiore tra essi
la loro media e la radice quadrata della somma.
*/

#include <stdio.h>
#include <math.h>

#define n 5

int main (void) {

    int i;
    float numero, massimo, somma=0;

    for (i=0;i<n;i++) {
        printf("Inserimento numero %d", i);
        scanf("%f", &numero);

        if(i==0){
            massimo=numero;
        } else {
            if(numero>massimo){
                massimo=numero;
            }
        }

        somma = somma+numero;
    }


    printf("Il maggiore è %.2f\n", massimo);
    printf("La media vale: %.2f\n", somma/n);
    printf("La radice quadrata della somma vale: %.2f", sqrt(somma));
}