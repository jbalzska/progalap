#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    �rjon C programot, amely k�t megadott sz�mr�l eld�nti, hogy melyik a nagyobb (szelekci�s
    utas�t�s). Vizsg�lja az egyenl�s�g�ket is! Megoldhat�-e a feladat switch szerkezettel?

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
