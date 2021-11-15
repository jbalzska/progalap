#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Sz�mrendszerek k�z�tti konverzi�. �rjon C programot, amely ki�rja egy tizes sz�mrendszerben
    megadott sz�m kettes sz�mrendszerbeli megfelel�j�t. A feladatot a bitl�ptet� oper�tor haszn�lat�val
    is oldja meg, ill. �gy is hogy 2 hatv�nyaival osztja a sz�mot.

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
