#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    K�sz�tsen C programot, amely bek�ri egy t�glatest h�rom oldal�nak hossz�t �s kisz�m�tja
    annak felsz�n�t (A = 2 * (a*b + a*c + b*c)) �s t�rfogat�t (V = a*b*c). A felsz�n sz�m�t�s�n�l
    �gyeljen a helyes z�r�jelez�sre!

    */

    int a, b ,c;
    printf("Kernem az oldalak ertekeket! (a, b, c): ");
    scanf("%d, %d, %d", &a, &b, &c);
    int A, V;
    A = 2 * (a*b + a*c + b*c);
    V = a*b*c;

    printf("Felszin: %d | Terfogat: %d", A, V);

    return 0;
}
