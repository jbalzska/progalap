#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Példa többirányú elágazásra
    Írjon telefonhasználati díjak számlázására alkalmas programot. Összesítse N db hívás után a
    telefonhasználati díjakat hívás típusonként (1-külföldi, 2-hálózaton kívüli, 3-hálózaton belüli). A
    hívási idõt percben adja meg a felhasználó. Díjszabás: külföldi hívás 100 Ft/perc, hálózaton kívüli
    hívás 60 Ft/perc, hálózaton belüli hívás 40 Ft/perc.

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
