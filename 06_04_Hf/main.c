#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    /*

    Olvasson be egy mondatot (az utolsó karakter ‘.’, ‘?’, vagy ‘!’). Keresse meg, hogy a mondatban:
    a) a mondatkezdõ karakteren kívül van-e nagybetû és az hanyadik,
    b) van-e speciális karakter vagy szám, és az hanyadik.

    */

    printf("\ta) Kerek egy mondatot, amelynek a vege '.', '?', vagy '!' legyen! \n\t");
    char ch;
    char tomb[255];
    int i = 0, n = 0;

    do
    {
        ch = getchar();
        tomb[n] = ch;
        n++;
    }
    while(ch != '.' && ch != '?' && ch != '!');


    int db = 0;
    for( i = 0; i < n; i++)
    {
        //printf("%c, ", tomb[i]);

        if(toupper(tomb[i]) == tomb[i] && i != 0 && i != n - 1)
        {
            db++;

            if(db > 0)
            {
                printf("\n\tVan nagybetus karakter! A(z) %d. indexen!", i);
            }

        }
    }
    //printf("Db: %d", db);

    return 0;
}
