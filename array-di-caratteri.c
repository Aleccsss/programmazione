/* potrei usare un carattere speciale per indicare che i
caratteri significativi finiscono lì
*/

int main (void) {


int i;
char s[100];
printf("immetti i caratteri (@ per terminare):");
i=-1;
do
{ i++;
scanf("%c",&s[i]);
} while (s[i]!='@');
i=0;
while (s[i]!='@')
{ printf("%c",s[i]);
i++;
}

}