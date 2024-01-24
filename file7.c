#include <stdio.h>

int main()
{
    int a;
    int b; 
    printf ("inserisci un numero a\n");
    scanf ("%d", &a);
    printf ("inserisci un numero b\n");
    scanf ("%d", &b);
    if(a > b)
    {
        printf("a è maggiore di b\n");
    }
    else if (a == b)
    {
        printf("a è unguale a b\n");
    }
    else
    {
        printf("b è maggiore di a\n");
    }
   return (0);
}