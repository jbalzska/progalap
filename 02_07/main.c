#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*

    A double fabs(double) f�ggv�ny seg�ts�g�vel �llap�tsa meg egy beolvasott sz�m abszol�t �rt�k�t.

    */

    double bekeres = 0;
    printf("Kerek egy szamot, aminek megadom az abszolut erteket: ");
    scanf("%lf", &bekeres);

    printf("A szam abszolut erteke: %lf", fabs(bekeres));


    return 0;
}
