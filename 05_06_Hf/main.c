#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*

    Implementálja a “Gondoltam egy számot” játék algoritmusát.
    CIKLUSBAN
    1. A számítógép sorsol egy 1-100 közötti számot.
    CIKLUSBAN
    2. A felhasználó mond egy tippet.
    3. A program kiírja, hogy a gondolt szám egyenlõ-e, ill. kisebb vagy
    nagyobb-e mint a felhasználó tippje.
    AMÍG a felhasználó tippje != a gondolt számmal
    4. A felhasználó megmondja, akarja-e folytatni a játékot.
    AMÍG a felhasználó akarja folytatni a játékot

    */

    srand(time(0));
    int r = 0, tipp = 0, in = 1;
    do
    {

        r = rand()%100+1;

        do
        {
            printf("\nKerek egy tippet! ");
            scanf("%d", &tipp);

            if(tipp == r)
            {
                printf("\nEgyenlo! Eltalaltad!");
            }
            if(tipp > r)
            {
                printf("\nFelebecsulted!");
            }
            if(tipp < r)
            {
                printf("\nAlabecsulted!");
            }
        }
        while(tipp != r);

        printf("\nSzeretned folytatni a jatekot? 0/1 - ");
        scanf("%d", &in);

    }
    while(in != 0);

    return 0;
}
