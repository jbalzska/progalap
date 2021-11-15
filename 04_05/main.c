#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*

    1 �s N k�z�tt hat�rozza meg a sz�mok szorzat�t �s m�rtani �tlag�t. N-et ellen�rz�tt
    m�don olvassa be (N>1).
    M�rtani �tlag sz�m�t�sa: a sz�mokat �ssze kell szorozni �s az eredm�nyb�l annyiadik gy�k�t kell
    vonni, ah�ny �tlagoland� sz�m van.
    A szorzatk�pz�shez haszn�lja az �sszegz�s alapalgoritmust.
    Hatv�nyoz�s:
    - math.h double pow(double alap, double kitevo) f�ggv�ny h�v�s�val.

    */

    int meret = 0, i = 0, ok_nemok = 0;
    char c;



    do
    {
        ok_nemok = 1;
        printf("\nHany darab szamot szeretnel megadni? ");

        if(scanf("%d", &meret) != 1 || meret < 1)
        {
            printf("Hibas adat!");
            ok_nemok = 0;
            while((c = getchar()) != '\n');
        }

    }
    while(ok_nemok != 1);


    int szamok[meret];

    for(i = 0; i < meret; i++)
    {
        printf("Kerem adja meg az %d. szamot: ", i + 1);
        scanf("%d", &szamok[i]);
    }

    for(i = 0; i < meret; i++)
    {
        printf("%d, ", szamok[i]);
    }

    int szorzas = 1;
    for(i = 0; i < meret; i++)
    {
        szorzas *= szamok[i];
    }

    printf("\nA szorzas eredmenye: %d", szorzas);

    double gyok = (double) (log (szorzas) / meret);
    printf("\nA gyokvonas eredmenye: %.2f", gyok);



    return 0;
}
