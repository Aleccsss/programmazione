#include <stdio.h>


int main (void) {

char stringa[50];

    printf("Inserisci una stringa \n");
        scanf("%s", stringa);  // NO & commerciale nella scanf delle stringhe!
        printf("%s", stringa);

}


/*
Un altro modo per scriverla sarebbe:

puts("Inserisci una stringa");   --> stampa l'argomento

gets(stringa);   immetti una stringa (uguale a scanf)
puts(stringa);   stampa la stringa a video (uguale a printf)
*/