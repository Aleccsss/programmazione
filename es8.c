/*Scrivere un prog che legga due vettori di interi di N elementi(specificato dall'utente) ciascuno con un massimo di 20 inserimenti
Il programma deve creare un ulteriore vettore, che contenga la
copia dei soli elementi pari presenti nei due vettori di partenza
e stampare tale vettore.
*/


#include <stdio.h>

#define max 20

int main(void) {

    int vett1[max];
    int vett2[max];

    int ris[2+max];
    int N,i,j=0;

    printf("Quanti numeri vuoi inserire?\n");
    scanf("%d", &N);

    printf("Inserisci i valori del primo vettore\n");

    for (i=0;i<N;i++){
        printf("Inserimento numero %d", i+1);
        scanf("%d", &vett1[i]);
    }

    printf("Inserisci i valori del secondo vettore\n");

    for(i=0;i<N;i++){
        printf("Inserimento numero %d", i+1);
        scanf("%d", &vett2[i]);
    }

    for (i=0;i<N;i++){

        if (vett1[i]%2==0){

            ris[j]=vett1[i];
            j++;
        }
        if(vett2[i]%2==0){
            ris[j]=vett2[i];
            j++;
        }
    }

    printf("Il risultato è:\n");
    for (i=0;i<j;i++){
        printf("%d ", ris[i]);
    }

}