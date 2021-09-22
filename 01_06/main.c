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

    int a, b;
    double c;

    printf("Kernem a ket befogo erteket! Rendnre: (a, b) ");
    scanf("%d, %d", &a, &b);

    c = sqrt(pow(a, 2) + pow(b, 2));
    printf("Az haromszog atfogoja: %.2f", c);

    return 0;
}
