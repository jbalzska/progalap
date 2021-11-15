#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*

    Írjon C programot, amely a derékszögû háromszög két befogójának ismeretében kiszámítja az
    átfogóját. A két befogó értékét a felhasználó adja meg. A négyzetreemeléshez használja a math.h -
    ban deklarált double pow(double, double) függvényt.

    */

    double a = 0, b = 0, c = 0;
    printf("Kerem a ket erteket! (Rendre: a, b)");
    scanf("%lf, %lf", &a, &b);

    c = sqrt(pow(a, 2) + pow(b, 2));

    printf("A harmoszog atfogoja: %.2f", c);




    return 0;
}
