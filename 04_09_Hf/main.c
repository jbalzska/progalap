#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*

    Keresse meg �s irassa ki 1 �s 100 k�z�tt az �sszes n�gyzetsz�mot.

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
