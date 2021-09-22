#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*
    �rjon C programot, amely kisz�m�tja a h�romsz�g ter�let�t oldalainak megad�s�val. Haszn�lja a
    H�r�n k�pletet:
    t(a masodikon)= s(s-a)(s-b)(s-c), ahol a, b, c a h�romsz�g oldalainak a hossza �s s a ker�let fele.
    �gyeljen a v�ltoz�k t�pus�ra! A ter�let meghat�roz�s�hoz haszn�lja a n�gyzetgy�kvon�st
    v�grehajt� f�ggv�nyt: double sqrt(double num). Ennek deklar�ci�j�t a math.h standard header
    �llom�ny tartalmazza. Figyelem! A math.h be�p�t�se -lm kapcsol�val t�rt�nik (linker opci�).
    */

    int a, b, c;
    double s, eredmeny_gyok, eredmeny;

    printf("Kerem a haromszog oldalit! (a, b, c): ");
    do{

    scanf("%d, %d, %d", &a, &b, &c);

    }while((a + b) < c || (a + c) < b || (b + c) < a);

    s = (double) (a + b + c) / 2; //a, b, c eg�sz sz�mok, s-nek pedig doublenak kell lennie!
    eredmeny_gyok = s*(s-a)*(s-b)*(s-c);
    eredmeny = sqrt(eredmeny_gyok);

    printf("A haromszog terulete Heron keplettel: %.2f", eredmeny);

    return 0;
}
