#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Adott a>0 és b>=0 számokra határozzuk meg a^b hatványértéket.

    */

    int a = 0, b = 0, i = 0, eredmeny = 1;
    printf("Kerem a hatvanyalapot es a kitevot(a, b)!");
    scanf("%d, %d", &a, &b);

    for(i = 1; i <= b; i++)
    {
        eredmeny *= a;
    }

    printf("Az eredmeny: %d", eredmeny);



    return 0;
}
