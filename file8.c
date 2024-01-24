#include <stdio.h>

int main()
{
    float a;
    float b; 
    float c;
    float d = -273.15;
    
 
    printf ("inserisci il primo numero\n");
    scanf ("%f", &a);
    b = a * 9/5 + 32;
    c = a + 273.15;
    if(a < d)
    {
        printf("errore\n");
    }
    else
    {
    printf("la temperatura in fahrenheit è %f\n", b);
    printf("la temperatura in kelvin è %f\n", c);
    }
   return (0);
}