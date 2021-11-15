#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bekeres(int a);
int main()
{
    /*

    Írjon programot, amely kiszámítja egy ellenõrzötten beolvasott egész szám négyzetét. Az egyes
    részfeladatokat külön függvényben valósítsa meg!

    */

    int szam;
    bekeres(&szam);
    negyzet(szam);

    printf("\n\tA megadott szam a(z) %d, aminek a negyezete %d.!", szam, negyzet(szam));


    return 0;
}
void bekeres(int a)
{
    int ok = 0;
    char c;

    do
    {
        ok = 1;
        printf("\nKerek egy szamot, amit negyeztre emelhetek! ");
        if(scanf("%d", a) != 1)
        {
            ok = 0;
            printf("Hibas adat!");
            while((c = getchar()) != '\n');
        }
    }
    while(ok != 1);

    return ;
}
void negyzet(int a)
{
    int eredmeny = pow(a, 2);
    return ;
}


