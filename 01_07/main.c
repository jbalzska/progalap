#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //A double fabs(double) f�ggv�ny seg�ts�g�vel �llap�tsa meg egy beolvasott sz�m abszol�t �rt�k�t.

    int x;
    printf("Kerem X erteket! ");
    scanf("%d", &x);

    if(x < 0){
        x = x*(-1);
    }

    printf("Az X abszolut erteke: %d", x);

    return 0;
}
