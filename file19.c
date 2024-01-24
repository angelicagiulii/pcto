#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    
    
    printf("inserisci la misura di un lato (la base) del triangolo\n");
    scanf(" %d", &a);     
    printf("inserisci la misura di un lato (il cateto maggiore) del triangolo\n");
    scanf(" %d", &b);     
    printf("inserisci la misura di un lato (il cateto minore) del triangolo\n");
    scanf(" %d", &c);     
    if (a<=0 || b<=0 || c<=0 || a+b<c || a+c<b || b+c<a)
    {
        printf("errore\n");
    }
    else if(a == b && a != c || b == c && b != a || a == c && a != b  )
    {
       printf("il triangolo è isoscele\n");
    } 
    else if (a == b && b == c )
    {
        printf("il triangolo è equilatero\n");
    }
    else if (a != b && b!= c && a != c )
    {
      printf("il triangolo è scaleno\n");  
    }
   return (0);         
}