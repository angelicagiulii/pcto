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
}