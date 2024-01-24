#include <stdio.h>

int main()
{
    int a; 
    int b;
    int c;
    printf ("il lato del triangolo misura\n");
    scanf ("%d", &a);        
    printf ("il lato del triangolo misura\n");
    scanf ("%d", &b);  
    printf ("il lato del triangolo misura\n");
    scanf ("%d", &c);   
    if(a + c > b && b + c > a)
    {
        printf("possono essere le grandezze dei lati di un triangolo\n");
    }
    else
    {
    printf("non possono essere le grandezze dei lati di un triangolo\n");
    }
   return (0);    

}