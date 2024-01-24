#include <stdio.h>

int main() 
{
    int nPezzi;
    int tot;
    int sconto;
    printf("inserisci in numero di pezzi\n ");
    scanf(" %d", &nPezzi);
    while(nPezzi > 0);
  { 
    tot = nPezzi * 5;
    if(nPezzi >= 50)
    {
        sconto = (tot * 15) /100
        printf("il prezzo scontato è: %f\n", sconto;)
    }
    else if (nPezzi>= 30)
    {
        sconto = (tot * 10) / 100;
        printf("il pr4ezzo scontato è: %f\n", sconto);
    }
    else
    {
      printf("il pr4ezzo scontato è: %f\n", tot);  
    }

  }





    y = x * 5 
    if(y > 30)
    {
        printf("y - \n");
    }
    else
    {
    printf("i numeri non sono in progressione aritmettica\n");
    }




    x = 100;
    while (x > 0) 
    {
    printf("%d\n", x);
    x = x - 2;
    }
return (0);
}