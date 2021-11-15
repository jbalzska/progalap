#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    /*

    Keresés karaktertömbben
    Deklaráljon és inicializáljon egy tetszõleges méretû és tartalmú karaktertömböt. Egy beolvasott
    karaktert lineáris keresõ eljárással keressen meg ebben a tömbben.

    */

    char tomb[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int trueorfalse = 0;
    char bekeres;
    int i = 0, hanyadik = 0;
    double meret = sizeof(tomb) / sizeof(char);

    printf("Kerem az abc egy karakteret! ");
    scanf("%c", &bekeres);

    for(i = 0; i < meret; i++)
    {
        if(tomb[i] == tolower(bekeres))
        {
            trueorfalse = 1;
            hanyadik = i;
        }
    }



    if(trueorfalse == 1)
    {
        printf("A megadott %c karakter a(z) %d. elem a tombben!", bekeres, hanyadik +1);
    }
    else
    {
        printf("A megadott %c karakter nincs benne az abc-ben.", bekeres);
    }


    return 0;
}
