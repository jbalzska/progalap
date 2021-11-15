#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*

    Keresse meg és irassa ki 1 és 100 között az összes négyzetszámot.

    */

    int i = 0, a = 0;

    for(i = 0; i < 100; i++)
    {
        a = pow(i, 2);
        if(a < 100 && a != 0)
        {
            printf("%d, ", a);
        }
    }

    return 0;
}
