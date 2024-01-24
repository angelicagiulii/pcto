#include <stdio.h>

int main()
{
    int a; 
    
     printf ("inserisci un anno\n");
     scanf ("%d", &a);        
     

      if((a % 400) == 0)
    {
        printf("l'anno è bisestile\n");
    }
    if((a % 4) == 0)
    {
        printf("l'anno è bisestile\n");
    }
    else
    {
    printf("l'anno non è bisestile\n");
    }
   return (0);    

}