#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*

    Implement�lja a �Gondoltam egy sz�mot� j�t�k algoritmus�t.
    CIKLUSBAN
    1. A sz�m�t�g�p sorsol egy 1-100 k�z�tti sz�mot.
    CIKLUSBAN
    2. A felhaszn�l� mond egy tippet.
    3. A program ki�rja, hogy a gondolt sz�m egyenl�-e, ill. kisebb vagy
    nagyobb-e mint a felhaszn�l� tippje.
    AM�G a felhaszn�l� tippje != a gondolt sz�mmal
    4. A felhaszn�l� megmondja, akarja-e folytatni a j�t�kot.
    AM�G a felhaszn�l� akarja folytatni a j�t�kot

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
