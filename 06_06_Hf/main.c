#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*

    1990 és 2020 között hányadik év volt az elsõ szökõév

    */

    srand(time(0));

    int ev = rand()%30+1990;

    printf("\tEv: %d", ev);

    if((ev % 4 == 0)&& ev % 100 != 0)
    {
        printf("\tSzokoev!");
    }
    else
    {
        printf("\n\tNEM szokoev!");
    }


    return 0;
}
