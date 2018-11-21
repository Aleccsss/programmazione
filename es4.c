/*
Scrivere un programma che legga da tastiera una sequenza di lunghezza ignota
a priori di numeri interi positivi. Il programma, a partire dal primo numero, stampa 
ogni volta la media di tutti i numeri introdotti con 2 cifre decimali.
Terminare quando il numero inserito è negativo
*/

#include <stdio.h>


int main (void) {

    float numero;
    float totale=0;
    int cont=0;
    float media;


    do {
        printf("Inserire un numero: ");
        scanf("%f", &numero);
        if (numero>0) {
            totale=totale+numero;
            cont++;
            media=totale/cont;
            printf("La media è: %.2f", media);
        }
    } while(numero>0);
}