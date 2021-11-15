#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 150

typedef struct
{
    int tomb[n];

}Adatok;

void Feltoltes(Adatok *);
void Kiiras(Adatok);
void Valogatas(Adatok a);

int main()
{
    /*

    Egy egyetemi oktató 5 csoportba oszt szét 150 db ZH dolgozatot (max. 50 pont). 0-25 pont
    elégtelen, 26-32 pont elégséges, 33-39 pont közepes, 40-45 pont jó, 46-50 pont jeles. Készítsen C
    programot, amely elvégzi ezt a feladatot.

    */

    Adatok a;
    Feltoltes(&a);
    Kiiras(a);
    printf("\n\n");
    Valogatas(a);

    return 0;
}
void Feltoltes(Adatok *a)
{
    int i = 0;
    srand(time(0));
    for( i = 0; i < n; i++ )
    {
        a->tomb[i] = rand()%50+0;
    }
}
void Kiiras(Adatok a)
{
    int i = 0;

    for( i = 0; i < n; i++ )
    {
        printf(" %d, ", a.tomb[i]);
    }
}
void Valogatas(Adatok a)
{
    int i = 0, e = 0, k = 0, h = 0, ne = 0, o = 0;

    for( i = 0; i < n; i++ )
    {
        if(a.tomb[i] <= 25)
        {
            e++;
        }
        if(a.tomb[i] >= 26 && a.tomb[i] <= 32)
        {
            k++;
        }
        if(a.tomb[i] >= 33 && a.tomb[i] <= 39)
        {
            h++;
        }
        if(a.tomb[i] >= 40 && a.tomb[i] <= 45)
        {
            ne++;
        }
        if(a.tomb[i] >= 46 && a.tomb[i] <= 50)
        {
            o++;
        }
    }

    printf("1: %d \n", e);
    printf("2: %d \n", k);
    printf("3: %d \n", h);
    printf("4: %d \n", ne);
    printf("5: %d \n", o);



}
