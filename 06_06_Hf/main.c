#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*

    1990 �s 2020 k�z�tt h�nyadik �v volt az els� sz�k��v

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
