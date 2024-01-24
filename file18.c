#include <stdio.h>
void somma(float x, float y)
{
    printf("la somma dei valori inseriti è: %f\n", (x + y));
}
void sottrazione(float x, float y)
{
    printf("la sottrazione dei valori inseriti è: %f\n", (x - y));
}
void moltiplicazione(float x, float y)
{
    printf("la moltiplicazione dei valori inseriti è: %f\n", (x * y));
}
void divisione(float x, float y)
{
    printf("la divisione dei valori inseriti è: %f\n", (x / y));
}

int main()
{
    int x;
    int y;
    int operazione;

    printf("inserisci il primo numero\n");
    scanf("%d", &x);
    printf("inserisci il secondo numero\n");
    scanf("%d", &y);
    printf("che operaione vuoi eseguire?\n");
    printf("premare\n - 1 per la somma\n - 2 per la sottrazione\n - 3 per la moltiplicazione\n - 4 per la divisione\n");
    scanf("%d", &operazione);
    if (operazione == 1)
    {
        somma(x, y);
    }
    else if (operazione == 2)
    {
        sottrazione(x, y);
    }
    else if (operazione == 3)
    {
        moltiplicazione(x, y);
    }
    else if (operazione == 4)
    {
        divisione(x, y);
    }
    
return (0);    
}
