#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Sz�mok �sszegz�se 1-t�l N-ig (el�l- �s h�tultesztel� ciklussal). Haszn�lj�k a l�ptet� oper�tort �s
    az �sszevont �rt�kad�s oper�tor�t (+=).


    */

    int i = 0, n = 0, osszegzes = 0;

    printf("Meddig menjen a ciklus? Adjon meg egy egsz szamot! ");
    scanf("%d", &n);


    for(i = 0; i < n; i++)
    {
        osszegzes += i;
    }

    printf("A ciklusnak megadott hatarig a szamok osszege: %d", osszegzes);

    return 0;
}
