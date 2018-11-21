/*
si scriva un programma che calcoli l'MCD con l'algoritmo di Euclide.
L'algoritmo di euclide è un algoritmo per trovare il MCD tra due numeri interi.
Dati due numeri a e b, si controlla se b è zero
se lo è, a è il MCD, se non lo è, si divide a/b e si assegna ad r il resto della divisione
Se r=0 allora si può terminare affermando che b è il MCD cercato, altrimenti
occorre assegnare a=b e b=r e si ripete nuovamente la divisione
*/

int main (void) {
    int a;
    int b;
    int r;

    printf("Inserisci i 2 numeri interi\n");
    scanf("%d %d", &a, &b);

    if (b==0) {
        printf("%d è il massimo comun divisore", a);
    } else {

        do{
            r=a%b;
            if(r==0){
                printf("%d è il massimo comun divisore", b);
            } else {
                a=b;
                b=r;
            }

        }//fine ciclo do
        while(r!=0);
    }
}