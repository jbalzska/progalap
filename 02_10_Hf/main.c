#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Írjon C programot, amely beolvas egy valós (double típusú) számot és visszaadja a hozzá
    legközelebb esõ kisebb ill. nagyobb egész számot. Felhasználandó függvények:
    double ceil(double) ; double floor(double)

    */

    double szam = 0;
    printf("Kerek egy double tipusu szamot! ");
    scanf("%lf", &szam);

    printf("A %.2f -hoz legkozelebb eso kisebb szam a %.2f es a legkozelebb eso nagyobb szam %.2f", szam, floor(szam), ceil(szam));

    return 0;
}
