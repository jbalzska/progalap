#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Eld�nteni egy megadott �vsz�mr�l, hogy sz�k��v-e. Sz�k��v minden negyedik �v, de a
    sz�zadik nem. Ugyanakkor minden n�gysz�zadik �v sz�k��v. P�ld�tul: 2000, 2004 sz�k��vek, de
    1900 nem az.


    */

    int evszam = 0;

    printf("Kerek egy evszamot! ");
    scanf("%d", &evszam);

    if( ((evszam % 4 == 0) && (evszam % 100 != 0)) || (evszam % 400 == 0)  )
    {
        printf("\n\tSzokoev!");
    }
    else
    {
        printf("\tNem szokoev!");
    }



    return 0;
}
