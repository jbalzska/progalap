#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*

    �rjon C programot, amely beolvas egy val�s (double t�pus�) sz�mot �s visszaadja a hozz�
    legk�zelebb es� kisebb ill. nagyobb eg�sz sz�mot. Felhaszn�land� f�ggv�nyek:
    double ceil(double) ; double floor(double)

    */

    double ertek;
    double eredmeny_ceil;
    double eredmeny_floor;

    ertek = 1.6;
    eredmeny_ceil = ceil(ertek);
    eredmeny_floor = floor(ertek);

    //Ceil felfel�, Floor lefele� kerek�t!

    printf("Ertek: %1f a ceil-je %1f\n", ertek, eredmeny_ceil);
    printf("Ertek: %1f a floor-ja %1f", ertek, eredmeny_floor);

    return 0;
}
