#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    �rjon C programot, amely beolvas k�t eg�sz sz�mot, �s ki�rja az oszt�s eredm�ny�t az al�bbi
    form�ban: osztand� / oszt� = h�nyados, marad�k x. Ugyanezt oldja meg val�s (double
    t�pus�) sz�mokkal is. Az oszt�si marad�k kisz�m�t�s�hoz haszn�lja a math.h double
    fmod(double, double) f�ggv�ny�t.

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
