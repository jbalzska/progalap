#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void alap(int a);
void kitevo(int b);
int main()
{
    /*

    �rjon C programot, amely k�l�n f�ggv�nyben ellen�rz�tt m�don beolvas egy hatv�nyalapot, ill.
    egy kitev�t. �rja meg a hatv�nyoz�st megval�s�t� f�ggv�nyt.

    */

    int szam1;
    alap(&szam1);
    //printf("%d. ", szam1); WORKING

    int szam2;
    kitevo(&szam2);
    //printf("%d. ", szam2); WORKING
    //printf("%d. %d.", szam1, szam2); WORKING

    int eredmeny = pow(szam1, szam2);
    printf("Az eredmeny: %d.", eredmeny); //WORKING

    return 0;
}
void alap(int a)
{
    int ok = 0;
    char c;

    do
    {

        ok = 1;
        printf("\nKerek egy hatvanyalapot! ");

        if(scanf("%d", a) != 1)
        {
            ok = 0;
            printf("Hibas adat!");
            while((c = getchar()) != '\n');
        }

    }
    while( ok != 1 );
}
void kitevo(int b)
{
    int ok = 0;
    char c;

    do
    {

        ok = 1;
        printf("\nKerek egy kitevot! ");

        if(scanf("%d", b) != 1)
        {
            ok = 0;
            printf("Hibas adat!");
            while((c = getchar()) != '\n');
        }

    }
    while( ok != 1 );
}

