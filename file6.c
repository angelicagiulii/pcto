#include <stdio.h>

int main()
{
        int a;
        int b;
        int c;
        int d;
        printf("quanti anni ha Simone? ");
        scanf(" %d", &a);
        printf("quanti anni ha Angelica? ");
        scanf(" %d", &b);
        printf("quanti anni ha Matilde? ");
        scanf(" %d", &c);
        printf("quanti anni ha Elisa? ");
        scanf(" %d", &d);
        printf("risultato= %d\n", (a + b + c + d) );  
        printf("Simone ha %d\n", a);
        printf("Angelica ha %d\n", b);
        printf("Matilde ha %d\n", c);
        printf("Elisa ha %d\n", d);   
}