#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Számrendszerek közötti konverzió. Tároljon el tömbben egy kettes számrendszerbeli számot és
    konvertálja át tízes számrendszerben adott számra. Fordítva lett megírva!


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
