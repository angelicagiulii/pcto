#include <stdio.h>

int main()
{
    int a; 
    int b;
    int c;
    int x;
    

     printf ("inserisci il primo numero\n");
     scanf ("%d", &a);        
     printf ("inserisci il primo numero\n");
     scanf ("%d", &b);       
     printf ("inserisci il primo numero\n");
     scanf ("%d", &c);
     x = b - a;  

      if(c - b == x)
    {
        printf("i numeri sono in progressione aritmettica\n");
    }
    else
    {
    printf("i numeri non sono in progressione aritmettica\n");
    }
   return (0);    

}