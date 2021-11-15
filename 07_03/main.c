#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    �rjon C programot, amely megmondja egy megadott sz�mr�l h. t�k�letes-e. T�k�letes
    sz�m az a sz�m, amely megegyezik a n�la kisebb oszt�inak �sszeg�vel (Pl.: 6=1+2+3; 28, 496, 8128).

    */

    int i = 0, osszeg = 0, bekeres = 0, ok = 0;
    char c;

    do
    {
        ok = 1;
        printf("\nKerek egy szamot, amirol megmondhatom, hogy tokeletes-e! ");
        if(scanf("%d", &bekeres) != 1)
        {
            ok = 0;
            printf("Hibas adat!");
            while((c = getchar()) != '\n');
        }
    }
    while(ok != 1);



    for(i = 1; i < bekeres; i++)
    {
        if(bekeres % i == 0)
        {
            osszeg += i;
        }
    }

    //printf("Osszeg: %d", osszeg);

    if(bekeres == osszeg)
    {
        printf("\n\n\tA megadott szam tokeletes! %d == %d\n", bekeres, osszeg);
    }
    else
    {
        printf("\n\n\tA megadott szam NEM tokeletes! %d != %d\n", bekeres, osszeg);
    }


    return 0;
}
