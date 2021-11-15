#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Írjon C programot, amely két megadott számról eldönti, hogy melyik a nagyobb (szelekciós
    utasítás). Vizsgálja az egyenlõségüket is! Megoldható-e a feladat switch szerkezettel?

    */

    int a = 0, b = 0;
    printf("Kerek ket szamot! (a, b) ");
    scanf("%d, %d", &a, &b);

    if(a > b)
    {
        printf("Az a nagyobb, mint a b | %d > %d", a, b);
    }
    else if(a < b)
    {
        printf("A b nagyobb, mint az a | %d < %d", a, b);
    }
    else if(a == b)
    {
        printf("Az a es a b egyenlo | %d > %d", a, b);
    }

    return 0;
}
