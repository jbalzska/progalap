#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Sz�mrendszerek k�z�tti konverzi�. T�roljon el t�mbben egy kettes sz�mrendszerbeli sz�mot �s
    konvert�lja �t t�zes sz�mrendszerben adott sz�mra. Ford�tva lett meg�rva!


    */

    int bekeres = 0, maradek = 0, szamrendszer = 2;
    printf("Kerek egy szamot 10-es szamrendszerben! ");
    scanf("%d", &bekeres);

    while(bekeres > 0)
    {

        maradek = bekeres % szamrendszer;
        bekeres = bekeres / szamrendszer;
        printf("%d | %d\n", bekeres, maradek);


    }


    return 0;
}
