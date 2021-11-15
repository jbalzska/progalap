#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Egy megadott szám abszolút értékének meghatározása (szelekciós utasítással).

    */

    int szam = 0;
    printf("Kerek egy egesz szamot! ");
    scanf("%d", &szam);

    if(szam < 0)
    {
        szam = szam * (-1);
    }

    printf("A megadott szam abszolut erteke: %d", szam);

    return 0;
}
