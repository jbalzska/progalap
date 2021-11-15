#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*

    A double fabs(double) függvény segítségével állapítsa meg egy beolvasott szám abszolút értékét.

    */

    double bekeres = 0;
    printf("Kerek egy szamot, aminek megadom az abszolut erteket: ");
    scanf("%lf", &bekeres);

    printf("A szam abszolut erteke: %lf", fabs(bekeres));


    return 0;
}
