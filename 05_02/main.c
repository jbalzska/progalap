#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Az EURO �rfolyam�t egy negyed�ven kereszt�l hetente nyilv�ntartjuk (HUF / EUR). �rjon C
    programokat az al�bbi k�rd�sek megv�laszol�s�ra.
    a) H�nyszor volt a negyed�vben 300 Ft alatt az �rfolyam �rt�ke? A t�mb�t inicializ�lja.
    b) Monoton n�tt-e az �rfolyam a negyed�v sor�n? Alkalmazzon ellen�rz�tt adatbeolvas�st. A v�lasz
    ki�r�s�t felt�teles oper�torral val�s�tsa meg.
    c) Melyik h�ten volt a legmagasabb, �s melyiken a legalacsonyabb az �rfolyam? Melyek voltak
    ezek a sz�ls��rt�kek?
    d) Mennyi az adott negyed�vre vonatkoz� �tlagos �rfolyam �rt�k? El�jelhelyesen �rja ki, hogy az
    egyes adatok mennyivel t�rnek el az �tlagt�l. Ezt a feladatot pointer haszn�lat�val is oldja meg.

    */

    double nyilvantartas[] = {289.5, 292.6, 290.2, 295.5, 300.4, 300.3, 302.5, 303.3, 303.5, 299.9};
    double meret = sizeof(nyilvantartas) / sizeof(double);

    printf("\na)\n\t");

    int db = 0, i = 0;
    for(i = 0; i < meret; i++)
    {
        if(nyilvantartas[i] < 300)
        {
            db++;
        }
    }
    printf("%dx volt az arfolyam 300 Ft alatt.", db);


    printf("\nb)\n\t");

    int igaze = 1;

    for(i = 1; i < meret; i++)
    {
        if(nyilvantartas[i - 1] > nyilvantartas[i])
        {
            igaze = 0;
        }
    }

    if(igaze == 0)
    {
        printf("Csokkeno!");
    }
    else
    {
        printf("Novekvo!");
    }

    printf("\nc)\n\t");

    double min = nyilvantartas[0], max = 0;
    int index_min = 0, index_max = 0;

    for(i = 0; i < meret; i++)
    {
        if(nyilvantartas[i] > max)
        {
            max = nyilvantartas[i];
            index_max = i;
        }
        if(nyilvantartas[i] < min)
        {
            min = nyilvantartas[i];
        }
    }

    printf("Min: %.2f - %d. het, Max: %.2f - %d. het", min, index_min + 1, max, index_max + 1);


    printf("\nd)\n\t");

    double atlag = 0;
    int ossz = 0;

    for(i = 0; i < meret; i++)
    {
        ossz += nyilvantartas[i];
    }
    atlag = ossz / meret;
    printf("Az atlag: %.2f - Az atlagtol eltero adatok: \n\t", atlag);

    for(i = 0; i < meret; i++)
    {
       printf("%.2f, ", nyilvantartas[i] - atlag);
    }

    //--- --- ---

    printf("\n*d)\n\t");

    double *pA = &atlag;
    int *pO = &ossz;

    //printf("Ossz: %d(*pO) = %d(ossz) | Atlag: %.2f(*pA) = %.2f(atlag)", *pO, ossz, *pA, atlag);

    printf("Az atlag: %.2f - Az atlagtol eltero adatok: \n\t", *pA);
    for(i = 0; i < meret; i++)
    {
        printf("%.2f, ", nyilvantartas[i] - *pA);
    }



    return 0;
}
