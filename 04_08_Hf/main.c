#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Keresse meg �s irassa ki az els� N db pr�msz�mot. N �rt�k�nek beolvas�sa ellen�rz�ssel
    t�rt�njen.

    */

    int n = 0, i = 0;
    printf("Kerek egy szamot! \n\t");
    scanf("%d", &n);

    for(i = 0; i <= n; i++)
    {
        if((i % 2 != 0 && i % 3 != 0 && i % 5 != 0)  || (i == 2 || i == 3 || i == 5))
        {
            printf("%d, ", i);
        }
    }


    return 0;
}
