#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    �rjon C programot, amely beolvas egy val�s (double t�pus�) sz�mot �s visszaadja a hozz�
    legk�zelebb es� kisebb ill. nagyobb eg�sz sz�mot. Felhaszn�land� f�ggv�nyek:
    double ceil(double) ; double floor(double)

    */

    double szam = 0;
    printf("Kerek egy double tipusu szamot! ");
    scanf("%lf", &szam);

    printf("A %.2f -hoz legkozelebb eso kisebb szam a %.2f es a legkozelebb eso nagyobb szam %.2f", szam, floor(szam), ceil(szam));

    return 0;
}
