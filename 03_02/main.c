#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Egy megadott sz�m abszol�t �rt�k�nek meghat�roz�sa (szelekci�s utas�t�ssal).

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
