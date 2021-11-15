#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*

    1 és N között határozza meg a számok szorzatát és mértani átlagát. N-et ellenõrzött
    módon olvassa be (N>1).
    Mértani átlag számítása: a számokat össze kell szorozni és az eredménybõl annyiadik gyököt kell
    vonni, ahány átlagolandó szám van.
    A szorzatképzéshez használja az összegzés alapalgoritmust.
    Hatványozás:
    - math.h double pow(double alap, double kitevo) függvény hívásával.

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
