// Programma che calcola quadrato e radice quadrata di un numero

#include <stdio.h>
#include <math.h>


int main (void) {

    float num, radice, quadrato;

    printf("Inserisci un numero ");
    scanf("%f", &num);

    quadrato = pow(num, 2);

    radice = sqrt(num);

    printf("Il quadrato del numero è %f\n", quadrato);
    printf("La radice del numero è %f\n", radice);

    return 0;
}