/*
Scrivere un programma che cheida di inserire 2 date nel formato gg/mm/aaaa
e stampi la più recente
*/

int main (void) {
    int giorno1,mese1,anno1;
    int giorno2,mese2,anno2;
    //acquisizione dati
    printf("inserire la prima data \n");
    scanf("%d%d%d", &giorno1,&mese1,&anno1);
    printf("inserire la seconda data\n");
    scanf("%d%d%d", &giorno2,&mese2,&anno2);

    //elenco tutti  i casi nei quali la prima data è > della seconda

    if (anno1>anno2) {
        printf("%d%d%d è la più recente", giorno1,mese1,anno1);
    }

    else if (anno1==anno2 && mese1>mese2) {
        printf("%d%d%d è la più recente", giorno1,mese1,anno1);
    }

    else if (anno1==anno2 && mese1==mese2 && giorno1>giorno2) {
        printf("%d%d%d è la più recente", giorno1,mese1,anno1);
    }


    else {   //altri casi la seconda data è la più grande
        printf("%d%d%d è la più recente", giorno2, mese2, anno2);
    }
    
    }