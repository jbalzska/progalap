#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Megadott sugarú kör területének és kerületének a kiszámítása.
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
