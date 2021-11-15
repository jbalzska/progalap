#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define n 10

int main()
{
    /*

    Keres�s rendezetlen numerikus t�mbben
    T�lts�nk fel egy 10 elem� t�mb�t 10 �s 100 k�z� es� v�letlensz�mokkal. Keress�k meg ebben a
    t�mbben:
    a) a legkisebb pr�msz�mot,
    b) a legnagyobb n�gyzetsz�mot.
    Figyelem! Lehet hogy nincs a t�mbben a felt�telnek megfelel� elem.

    */

    srand(time(0));

    int random[n];
    int prim[n];
    int i = 0, ok = 0;

    for(i = 0; i < n; i++)
    {
        random[i] = rand()%90+10;
        printf("%d, ", random[i]);
    }

    //a) feladat
    printf("\n\nPrimek: ");
    int min = 100;
    for(i = 1; i < n; i++)
    {
        if(random[i] % 2 != 0 && random[i] % 3 != 0 && random[i] % 5 != 0 && random[i] % 7 != 0)
        {
            ok = 1;
            printf("%d, ", random[i]);

            if(random[i] < min)
            {
                min = random[i];
            }

        }
    }


    if(ok == 1)
    {
        printf("\n\nLegkisebb prim: %d", min);
    }
    else
    {
        printf("\n\nNincs prim!");
    }

    //b) feladat
    int negyzetszamok = 0;
    printf("\n\nNegyzetszamok: ");

    int szam = 0, ook = 0;
    for( i = 0; i < n; i++ )
    {
        szam = sqrt(random[i]);

        if(szam * szam == random[i])
        {
            printf("%d, ", random[i]);
            ook = 1;
        }
    }
    if(ook == 0)
    {
        printf("Nincs negyzetszam a sorozatban!");
    }

    printf("\n");
    return 0;
}
