#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Írjon C programot egy beolvasott N érték faktoriálisának kiszámítására.

    */

    int n = 0, i = 0, eredmeny = 1;

    printf("Adja meg n erteket! ");
    scanf("%d", &n);

    printf("%d! felbontva: \n\t", n);
    for(i = n; i >= 1; i--)
    {
        printf("%d* ", i);
        eredmeny *= i;
    }
    printf("\n\t\t%d! eredmenye: %d", n, eredmeny);

    return 0;
}
