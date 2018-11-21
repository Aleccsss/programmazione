/*
Chiedere 2 num. interi (a,b) e dis. un rettangolo di dimensioni
a*b usando il carattere "*"
*/


int  main (void) {
    int a,b,i,j;

    printf("Inserisci l'altezza");
    scanf("%d", &a);
    printf("Inserisci la base");
    scanf("%d", &b);

    for(i=0;i<a;i++) {
        
        printf("\n");

        for(j=0;j<b;j++){
            printf("*");
        }
    }
}