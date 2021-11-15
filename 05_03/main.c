#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 20

int main()
{
    /*

    -1000 �s 1000 k�z� es� v�letlensz�mokkal t�lts�n fel egy 20 elem� integer t�mb�t, majd v�gezze el
    az al�bbi feladatokat:
        a) V�logassa sz�t a t�mb elemeit pozit�v �s negat�v sz�mokra.
        b) Sz�m�tsa ki a r�szt�mb�k �tlag�t. Figyelem! R�szhalmaz �tlagol�sakor a r�szhalmaz
        elemsz�m�val kell osztani.
        c) Eleme-e a pozit�v t�mbnek az 500? Ha igen, hanyadik eleme? (Eld�nt�s, kiv�laszt�s)

    */

    int tomb[n];
    int i = 0, index = -1;
    double db_p = 0, db_n = 0, ossz_p = 0, ossz_n = 0;

    srand(time(0));

    for(i = 0; i < n; i++)
    {
        tomb[i] = rand()%2000-1000; //Felt�lt�s
    }

    for(i = 0; i < n; i++)
    {
        printf("\t%d, ", tomb[i]); //Ki�rat�s
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
