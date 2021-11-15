#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Írja meg egy egész szám ellenõrzött beolvasását megvalósító, valamint az egész szám
    faktoriálisát kiszámító függvényeket.

    */

    int bekeres = 0;
    beolvas(&bekeres);

    printf("%d! = %d", bekeres, faktorialis(bekeres));


    return 0;
}
void beolvas(int x)
{
    char c;
    int ok = 0;

    do
    {
        ok = 1;

        printf("\nKerek egy szamot! ");
        if(scanf("%d", x) != 1)
        {
            printf("\nHibas adat!");
            ok = 0;
            while((c = getchar()) != '\n');
        }

    }
    while(ok != 1);
    return;
}

int faktorialis(int x)
{
    int fakt = 1;
    while(x > 1)
    {
        fakt *= x;
        x--;
    }
    return fakt;
}
