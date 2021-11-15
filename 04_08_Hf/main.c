#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Keresse meg és irassa ki az elsõ N db prímszámot. N értékének beolvasása ellenõrzéssel
    történjen.

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
