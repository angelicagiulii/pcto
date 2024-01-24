#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("inserisci l'anno in cui sei nato/a\n");
    scanf(" %d", &a);     
    b = 1969;
    c = a - b;
    d = b - a;
    if (a == b)
    {
        printf("sei nato/a l'anno in cui l'uomo è andato sulla luna\n");
    }
    else if (a < b)
    {
        printf("sei nato/a %d anni prima che l'uomo andasse sulla luna\n", d);
    }
    else if (a > b)
    {
        printf("sei nato/a %d anni dopo che l'uomo andasse sulla luna\n", c);
    }
    return (0);         
}