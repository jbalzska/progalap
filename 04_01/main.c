#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    P�lda t�bbir�ny� el�gaz�sra
    �rjon telefonhaszn�lati d�jak sz�ml�z�s�ra alkalmas programot. �sszes�tse N db h�v�s ut�n a
    telefonhaszn�lati d�jakat h�v�s t�pusonk�nt (1-k�lf�ldi, 2-h�l�zaton k�v�li, 3-h�l�zaton bel�li). A
    h�v�si id�t percben adja meg a felhaszn�l�. D�jszab�s: k�lf�ldi h�v�s 100 Ft/perc, h�l�zaton k�v�li
    h�v�s 60 Ft/perc, h�l�zaton bel�li h�v�s 40 Ft/perc.

    */

    int bekeres = 0, n = 0, i = 0, ar = 0, perc = 0;
    printf("Hany hivast szeretnel osszesiteni? ");
    scanf("%d", &n);

    do
    {

    printf("\n\t 1-kulfoldi\n\t 2-halozaton kivuli\n\t 3-halozaton beluli\n\t Valasszon! ");
    scanf("%d", &bekeres);

    printf("\n\tKerem a hivasi idot percben! ");
    scanf("%d", &perc);

    switch(bekeres)
    {
        case 1:
            ar += perc * 100;
            printf("\nA dij: %d Ft", ar);
        break;

        case 2:
            ar += perc * 60;
            printf("\nA dij: %d Ft", ar);
        break;

        case 3:
            ar += perc * 40;
            printf("\nA dij: %d Ft", ar);
        break;

        default:
            printf("Hibas adat a legeleso bekeresnel!");
        break;
    }
    i++;
    }
    while(i != n);


    return 0;
}
