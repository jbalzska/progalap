#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 20

void Feltoles(int *);
void Feltoles_Kiiras(int *);
void Sorrend_Novekvo(int *);
void Sorrend_Csokkeno(int *);

int main()
{
    /* Csupán gyakorlás */


    int tomb[n];
    Feltoles(&tomb);
    Feltoles_Kiiras(&tomb);
    Sorrend_Novekvo(&tomb);
    Sorrend_Csokkeno(&tomb);


    return 0;
}
void Feltoles(int *tomb)
{
    int i = 0;
    srand(time(0));
    for(i = 0; i < n; i++)
    {
        tomb[i] = rand()%20+5;
    }
}
void Feltoles_Kiiras(int *tomb)
{
    int i = 0;
    for(i = 0; i < n; i++)
    {
        printf(" %d ", tomb[i]);
    }
}
void Sorrend_Novekvo(int *tomb)
{
    int i = 0, j = 0, csere = 0;
    printf("\n\n");
    while(i <= n - 1)
    {
        j = i + 1;
        while(j <= n)
        {
            if(tomb[j] < tomb[i])
            {
                csere = tomb[j];
                tomb[j] = tomb[i];
                tomb[i] = csere;
            }
            j++;
        }
        i++;
    }

    for(i = 0; i < n; i++)
    {
        printf(" %d ", tomb[i]);
    }
}
void Sorrend_Csokkeno(int *tomb)
{
    int i = 0, j = 0, csere = 0;
    printf("\n\n");
    while(i <= n - 1)
    {
        j = i + 1;
        while(j < n)
        {
            if(tomb[j] > tomb[i])
            {
                csere = tomb[j];
                tomb[j] = tomb[i];
                tomb[i] = csere;
            }
            j++;
        }
        i++;
    }

    for( i = 0; i < n; i++ )
    {
        printf(" %d ", tomb[i]);
    }
}
