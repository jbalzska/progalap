#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    K�sz�tsen C programot, amely bek�ri egy t�glatest h�rom oldal�nak hossz�t �s kisz�m�tja
    annak felsz�n�t (A = 2 * (a*b + a*c + b*c)) �s t�rfogat�t (V = a*b*c). A felsz�n sz�m�t�s�n�l
    �gyeljen a helyes z�r�jelez�sre!

    */
    int a = 0, b = 0, c = 0, felszin = 0, terfogat = 0;

    printf("Kerem a teglatest harom oldalanak hosszat! (Rendre: a, b, c) ");
    scanf("%d, %d, %d", &a, &b, &c);

    felszin = 2*(a*b + a*c + b*c);
    terfogat = a * b * c;

    printf("Felszin: %d cm2 | Terfogat: %d cm3", felszin, terfogat);




    return 0;
}
