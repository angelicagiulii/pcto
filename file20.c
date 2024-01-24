#include <stdio.h>

int main()
{
    int a;
    
    
    
    printf("inserisci un numero \n");
    scanf(" %d", &a);    
    while (a>0);
    a=a+1 ;
    


    if (a / a != 1 && a/1 != a)
    {
        printf("non è un numero primo\n");
    }
    else  
    {
      printf(" è un numero primo\n");  
    }
   return (0);         
}