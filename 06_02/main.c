#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define n 10

int main()
{
    /*

    Keresés rendezetlen numerikus tömbben
    Töltsünk fel egy 10 elemû tömböt 10 és 100 közé esõ véletlenszámokkal. Keressük meg ebben a
    tömbben:
    a) a legkisebb prímszámot,
    b) a legnagyobb négyzetszámot.
    Figyelem! Lehet hogy nincs a tömbben a feltételnek megfelelõ elem.

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
