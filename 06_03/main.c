#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Keres�s rendezett numerikus t�mbben
    Adott a f�rfi teniszez�k vil�granglist�ja (cs�kken�en rendezett sorozat). T�rolja el a pontsz�mokat
    t�mbben �s implement�lja a tanult keres� elj�r�sokat.

    */

    int adatok[] = {11260, 9850, 9125, 6630, 5890, 5385, 4650, 3030, 2860, 2665};
    double n = sizeof(adatok) / sizeof(int);
    /*printf("%.2f, ", n); 10*/

    int i = 0, bekeres = 0, index = -1;
    printf("Kerek egy adatot, amit meg kell keressek az adatok kozott! \n\t");
    scanf("%d", &bekeres);

    for(i = 0; i < n; i++)
    {
        if(adatok[i] == bekeres)
        {
            index = i;
        }
    }

    if(index >= 0)
    {
        printf("\tA keresett adat a(z) %d. indexen van.", index);
    }
    else
    {
        printf("\tNincs ilyen adat!");
    }



    return 0;
}
