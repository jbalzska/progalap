#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

        Eld�nteni egy megadott sz�mr�l, hogy pr�msz�m-e.

    */


    int bekeres = 0, i = 0, db = 0;

    printf("Kerek egy szamot! ");
    scanf("%d", &bekeres);

    for(i = 1; i <= bekeres; i++)
    {
        if(bekeres % i == 0)
        {
            db++;
        }
    }


    if(db <= 2)
    {
        printf("Prim.");
    }
    else
    {
        printf("Nem prim.");
    }

    return 0;
}
