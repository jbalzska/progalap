#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Számrendszerek közötti konverzió. Írjon C programot, amely kiírja egy tizes számrendszerben
    megadott szám kettes számrendszerbeli megfelelõjét. A feladatot a bitléptetõ operátor használatával
    is oldja meg, ill. úgy is hogy 2 hatványaival osztja a számot.

    */


    int szam = 0, maradek = 0, szamrendszer = 2, i = 0, db = 0, ok = 0;
    int tomb[8];
    char c;


    do
    {
        ok = 1;
        printf("\nKerek egy tizes szamrendszerbeli szamot! ");
        if(scanf("%d", &szam) != 1)
        {
            ok = 0;
            printf("\nHibas adat!");
            while((c = getchar()) != '\n');
        }

    }
    while(ok != 1);


    while(szam > 0)
    {
        maradek = szam % szamrendszer;
        szam = szam / szamrendszer;
        tomb[i] = maradek;
        //printf("%d, ", tomb[i]);
        i++;
        db++;
    }

    printf("\n\nA tizes szamrendszerbeli ertek kettes szamrendszerbeli megfeleloje: \n\t");
    for(i = db - 1; i >= 0; i--)
    {
        printf("%d ", tomb[i]);
    }






    return 0;
}
