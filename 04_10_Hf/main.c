#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Ellen�rz�tt adatbeolvas�ssal adjon meg egy intervallumot (als�hat�r < fels�hat�r). Majd olvasson
    be N darab sz�mot �s sz�molja meg, hogy a megadott sz�mok k�z�l h�ny darab esik az
    intervallumba.

    */

    int ok_nemok = 0, also = 0, felso = 0, ok = 0, i = 0, db = 0, n = 0;
    char c;
    do
    {
        printf("Kerek egy alsohatart! \n\t");
        ok_nemok = 1;
        if(scanf("%d", &also) != 1)
        {
            ok_nemok = 0;
            printf("Hibas adat!");
            while((c = getchar()) != '\n');
        }
        printf("\n");
    }
    while(ok_nemok != 1);


    do
    {
        printf("Kerek egy felsohatart! \n\t");
        ok = 1;
        if(scanf("%d", &felso) != 1 || felso <= also)
        {
            ok = 0;
            printf("Hibas adat!");
            while((c = getchar()) != '\n');
        }
        printf("\n");
    }
    while(ok != 1);


    printf("\nKerek egy szamot! (n)\n\t");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        if(i > also && i < felso)
        {
            db++;
        }
    }

    printf("\nA megadott n: %d elemu tombben, ahol az alsohatar %d volt es a felsohatar pedig %d volt kerestem helyes ertekeket. \n\t%d helyes ertek volt!", n, also, felso, db);




    return 0;
}
