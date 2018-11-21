/*
Scrivere un programma che calcoli e stampi i primi N numeri
della serie di Fibonacci, con N inserito da tastiera.
La serie di Fibonacci inizia con 1, 1 ed ogni numero succ.
è dato dalla somma dei due precedenti: 1,1,2,3,5,8,13,21...
*/

int main(void) {

    int N, i, tmp;
    int prima=1;
    int ancoraPrima=1;


    printf("Inserire un numero ");
    scanf("%d", &N);

    if (N==1) {
        printf("%d", prima);
    }
    else if (N==2){
        printf("%d%d", prima, ancoraPrima);
    }
    else {
        printf("%d%d", prima, ancoraPrima);

        for (i=0;i<N-2;i++){
            printf("%d", prima+ancoraPrima);
            tmp=prima;
            prima=prima+ancoraPrima;
            ancoraPrima=tmp;
        }
    }
}