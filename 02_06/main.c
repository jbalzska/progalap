#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*

    �rjon C programot, amely a der�ksz�g� h�romsz�g k�t befog�j�nak ismeret�ben kisz�m�tja az
    �tfog�j�t. A k�t befog� �rt�k�t a felhaszn�l� adja meg. A n�gyzetreemel�shez haszn�lja a math.h -
    ban deklar�lt double pow(double, double) f�ggv�nyt.

    */

    double a = 0, b = 0, c = 0;
    printf("Kerem a ket erteket! (Rendre: a, b)");
    scanf("%lf, %lf", &a, &b);

    c = sqrt(pow(a, 2) + pow(b, 2));

    printf("A harmoszog atfogoja: %.2f", c);




    return 0;
}
