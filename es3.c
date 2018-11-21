/*
Si scriva un programma che dato un numero reale D immesso da tastiera calcoli e stampi:
1. l'area del quadrato di lato D
2. l'area del cerchio di diametro D
3. l'area del triangolo equilatero di lato D
*/

#include <stdio.h>
#include <math.h>
#define P 3.14159

int main (void) {

    float d, area1, area2, area3;

    printf("Inserisci un valore reale d\n");
    scanf("%f", &d);

    area1=d*d;
    area2= (d/2)*(d/2)*P;
    area3= (sqrt(3)/4)*d*d;

    printf("L'area del quadrato di lato d vale: %.2f", area1);
    printf("L'area del cerchio di diametro d vale: %.2f", area2);
    printf("L'area del triangolo equilatero di lato d vale: %.2f", area3);
}