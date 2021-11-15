#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //A double fabs(double) függvény segítségével állapítsa meg egy beolvasott szám abszolút értékét.

    int x;
    printf("Kerem X erteket! ");
    scanf("%d", &x);

    if(x < 0){
        x = x*(-1);
    }

    printf("Az X abszolut erteke: %d", x);

    return 0;
}
