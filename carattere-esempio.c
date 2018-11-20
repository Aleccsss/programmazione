#include <stdio.h>



int main (void) {

    char carattere;

    //scanf("c", &carattere);
    carattere = getchar();

    printf("%d\n", carattere);

    //printf("%c\n", carattere);
    putchar(carattere);
}