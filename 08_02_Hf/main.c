#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Lineáris keresõ eljárással keressen meg a szövegben egy megadott karaktert.

    */
    char mondat, karakter, tomb[255];
    int lepteto = 0, i = 0, index = 0;

    printf("Kerek egy karaktert! ");
    scanf("%c", &karakter);

    //printf("%c", karakter);


    printf("\n\nKerem adjon meg egy mondatot!(Kotelezo '.', '!', vagy '?' a vegere!)\n");

    while(mondat != '.' && mondat != '!' && mondat != '?')
    {
        mondat = getchar();
        tomb[lepteto] = mondat;
        lepteto++;
    }


    for(i = 0; i < lepteto; i++)
    {
        if(tomb[i] == karakter)
        {
            index = i;
            break;
        }
    }


    printf("\n\t%c karakter a %d. indexen van, a %d. helyen!", karakter, index - 1, index);

    return 0;
}
