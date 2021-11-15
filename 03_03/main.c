#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Számok összegzése 1-tõl N-ig (elöl- és hátultesztelõ ciklussal). Használják a léptetõ operátort és
    az összevont értékadás operátorát (+=).


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
