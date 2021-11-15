#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*

    �rjon C programot, amely kisz�m�tja a h�romsz�g ter�let�t oldalainak megad�s�val. Haszn�lja a
    H�r�n k�pletet: t2 = s(s-a)(s-b)(s-c), ahol a, b, c a h�romsz�g oldalainak a hossza �s s a ker�let fele.
    �gyeljen a v�ltoz�k t�pus�ra! A ter�let meghat�roz�s�hoz haszn�lja a n�gyzetgy�kvon�st
    v�grehajt� f�ggv�nyt: double sqrt(double num). Ennek deklar�ci�j�t a math.h standard header
    �llom�ny tartalmazza. Figyelem! A math.h be�p�t�se -lm kapcsol�val t�rt�nik (linker opci�).

    */

    int a = 0, b = 0, c = 0;
    double s = 0, t = 0, t2 = 0;

    printf("Adja meg a haromszog oldalainak erteket! (Rendre: a, b, c)");
    scanf("%d, %d, %d", &a, &b, &c);

    s = (double)(a + b + c) / 2;
    t2 = s*(s - a)*(s - b)*(s - c);
    t = sqrt(t2);

    printf("\nA haromszog terulete: %.2f | A haromszog kerulete: %d", t, a + b + c);



    return 0;
}
