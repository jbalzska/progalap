#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*

    Megadott sugarú kör területének és kerületének a kiszámítása.

    */
    double r = 0;
    printf("Kerem a kor sugaranak erteket: ");
    scanf("%lf", &r);

    double t = r*r*M_PI;
    double k = 2*M_PI*r;

    printf("A kor terulete: %.2f | A kor kerulete: %.2f", t, k);



    return 0;
}
