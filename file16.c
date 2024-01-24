#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    
    printf("inserisci la misura di un lato (la base) del triangolo\n");
    scanf(" %d", &a);     
    printf("inserisci la misura di un lato del triangolo\n");
    scanf(" %d", &b);     
    printf("inserisci la misura di un lato del triangolo\n");
    scanf(" %d", &c);     
    printf("inserisci la misura della base del triangolo\n");
    scanf(" %d", &d);     
       
    printf("perimetro = %d\n", (a + b + c) );     
    printf("area = %d\n", (d * a) );  
   return (0);         
}