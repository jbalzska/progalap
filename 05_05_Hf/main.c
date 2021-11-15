#include <stdio.h>
#include <stdlib.h>
#define n 6

int main()
{
    /*

    Az egyetemi hallgatóknak félévente 6 vizsgájuk van. Félév végén az elért tanulmányi átlag
    alapján ki szeretnénk számolni a hallgató ösztöndíját a következõ félévre: 3,5 alatt 0 Ft/hó, 3,6-4,0
    között 5eFt/hó, 4,1-4,5 között 10eFt/hó és 4,6-5,0 között 15eFt/hó. Írjon C programot, amely
    beolvassa egy hallgató vizsgajegyeit és eltárolja egy tömbben, kiszámítja a tanulmányi átlagot és
    kiírja az ösztöndíj havi összegét.

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
