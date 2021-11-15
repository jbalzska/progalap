#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define n 5

int main()
{
    /*

    Lottósorsolás. Írjon C programot, amely elõállítja az ötöslottó heti nyerõszámait.
    Megoldás: A program 1 és 90 között állít elõ 5 különbözõ véletlenszámot.
    Megoldható-e a feladat tömb használata nélkül?

    */

    srand(time(0));
    int i = 0, j = 0;
    int lotto[n];

    for(i = 0; i < n;)
    {
        lotto[i] = rand()%5+1;

        for(j = 0; j < i; j++)
        {
            if(lotto[j] == lotto[i])
            {
                break;
            }
        }

        if(j == i)
        {
            lotto[i] = lotto[j];
            i++;
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d, ", lotto[i]);
    }

    return 0;
}
