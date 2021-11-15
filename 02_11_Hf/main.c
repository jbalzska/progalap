#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Írjon C programot, amely beolvas két egész számot, és kiírja az osztás eredményét az alábbi
    formában: osztandó / osztó = hányados, maradék x. Ugyanezt oldja meg valós (double
    típusú) számokkal is. Az osztási maradék kiszámításához használja a math.h double
    fmod(double, double) függvényét.

    */

    int egesz1 = 0, egesz2 = 0;

    printf("Kerek ket int szamot(a, b)! ");
    scanf("%d, %d", &egesz1, &egesz2);
    double eredmeny_int = (double) egesz1/egesz2;

    printf("%d / %d = %.2f, maradek %d", egesz1, egesz2, eredmeny_int, egesz1%egesz2);

    printf("\n\n");

    double egesz3 = 0, egesz4 = 0;

    printf("Kerek ket double szamot(c, d)! ");
    scanf("%lf, %lf", &egesz3, &egesz4);
    double eredmeny_double = egesz3 / egesz4;

    printf("%lf / %lf = %.2f", egesz3, egesz4, eredmeny_double);


    return 0;
}
