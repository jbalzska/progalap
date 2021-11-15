#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Eldönteni egy megadott évszámról, hogy szökõév-e. Szökõév minden negyedik év, de a
    századik nem. Ugyanakkor minden négyszázadik év szökõév. Példátul: 2000, 2004 szökõévek, de
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
