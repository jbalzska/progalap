#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 20

int main()
{
    /*

    -1000 és 1000 közé esõ véletlenszámokkal töltsön fel egy 20 elemû integer tömböt, majd végezze el
    az alábbi feladatokat:
        a) Válogassa szét a tömb elemeit pozitív és negatív számokra.
        b) Számítsa ki a résztömbök átlagát. Figyelem! Részhalmaz átlagolásakor a részhalmaz
        elemszámával kell osztani.
        c) Eleme-e a pozitív tömbnek az 500? Ha igen, hanyadik eleme? (Eldöntés, kiválasztás)

    */

    int tomb[n];
    int i = 0, index = -1;
    double db_p = 0, db_n = 0, ossz_p = 0, ossz_n = 0;

    srand(time(0));

    for(i = 0; i < n; i++)
    {
        tomb[i] = rand()%2000-1000; //Feltöltés
    }

    for(i = 0; i < n; i++)
    {
        printf("\t%d, ", tomb[i]); //Kiíratás
    }

    printf("\n\n\ta,\n");
    printf("\n Negativ: \t");
    for(i = 0; i < n; i++)
    {
        if(tomb[i] < 0)
        {
            printf("%d, ", tomb[i]);
            db_n++;
            ossz_n += tomb[i];
        }
    }

    printf("\n Pozitiv: \t");
    for(i = 0; i < n; i++)
    {
        if(tomb[i] > 0)
        {
            printf("%d, ", tomb[i]);
            db_p++;
            ossz_p += tomb[i];

            if(tomb[i] == 500)
            {
                index = i;
            }
        }
    }

    printf("\n\nA negativ resztomb atlaga: %.2f", ossz_n / db_n);
    printf("\nA pozitv resztomb atlaga: %.2f", ossz_p / db_p);

    if(index >= 0)
    {
        printf("\n\nAz 500 eleme a pozitiv resztombnek, megpedig a %d. tagja.", index);
    }
    else
    {
        printf("\n\nNem eleme az 500.");
    }



    return 0;
}
