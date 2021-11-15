#include <stdio.h>
#include <stdlib.h>
#define n 6

int main()
{
    /*

    Az egyetemi hallgat�knak f�l�vente 6 vizsg�juk van. F�l�v v�g�n az el�rt tanulm�nyi �tlag
    alapj�n ki szeretn�nk sz�molni a hallgat� �szt�nd�j�t a k�vetkez� f�l�vre: 3,5 alatt 0 Ft/h�, 3,6-4,0
    k�z�tt 5eFt/h�, 4,1-4,5 k�z�tt 10eFt/h� �s 4,6-5,0 k�z�tt 15eFt/h�. �rjon C programot, amely
    beolvassa egy hallgat� vizsgajegyeit �s elt�rolja egy t�mbben, kisz�m�tja a tanulm�nyi �tlagot �s
    ki�rja az �szt�nd�j havi �sszeg�t.

    */

    int i = 0, ossz = 0, fizetes = 0;
    int jegyek[n];

    printf("Kerem a jegyeket! \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &jegyek[i]);
        ossz += jegyek[i];
    }

    //printf("Osszesen ez: %d", ossz); Teszt.

    double atlag = ossz / 6;

    if(atlag < 3.5)
    {
        fizetes = 0;
    }

    if(atlag >= 3.6 && atlag <= 4.0)
    {
        fizetes = 5000;
    }

    if(atlag >= 4.1 && atlag <= 4.5)
    {
        fizetes = 10000;
    }

    if(atlag >= 4.6 && atlag <= 5.0)
    {
        fizetes = 15000;
    }

    printf("\n\tFizetes: %d", fizetes);

    return 0;
}
