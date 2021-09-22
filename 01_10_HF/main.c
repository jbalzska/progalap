#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*

    Írjon C programot, amely beolvas egy valós (double típusú) számot és visszaadja a hozzá
    legközelebb esõ kisebb ill. nagyobb egész számot. Felhasználandó függvények:
    double ceil(double) ; double floor(double)

    */

    double ertek;
    double eredmeny_ceil;
    double eredmeny_floor;

    ertek = 1.6;
    eredmeny_ceil = ceil(ertek);
    eredmeny_floor = floor(ertek);

    //Ceil felfelé, Floor lefeleé kerekít!

    printf("Ertek: %1f a ceil-je %1f\n", ertek, eredmeny_ceil);
    printf("Ertek: %1f a floor-ja %1f", ertek, eredmeny_floor);

    return 0;
}
