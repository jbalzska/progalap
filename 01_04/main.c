#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Megadott sugar� k�r ter�let�nek �s ker�let�nek a kisz�m�t�sa.
    int r;
    printf("Adjon meg egy sugarat! ");
    scanf("%d", &r);
    double kerulet, terulet;
    const double PI = 3.14;

    kerulet = 2 * r * M_PI;
    terulet = pow(r, 2) * M_PI;

    printf("Kerulet: %.2f | Terulet: %.2f", kerulet, terulet);

    return 0;
}
