#include <stdio.h>

int main()
{
        char carattere[1];
        printf("digita un carattere\n");
        scanf(" %s", &carattere);
        if(strcmp (carattere, "a") == 0 || (strcmp (carattere, "e") == 0) || (strcmp (carattere, "i") == 0)|| (strcmp (carattere, "o") == 0)|| (strcmp (carattere, "u") == 0))
    {
        printf("è una vocale\n");
    }
    else
    {
    printf("è una consonante\n");
    }
   return (0);   
        
}