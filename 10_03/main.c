#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 10

typedef struct //NEM kotelezo nev!
{

    int tomb[n];

}Adatok; //Ide kotelezo a nev!

void Feltoltes(Adatok *);
void Kiiras(Adatok *);
void Paros(Adatok *);
void Paratlan(Adatok *);

int main()
{
    /*

    T�lts�n fel egy integer t�mb�t 1 �s 100 k�z� es� v�letlensz�mokkal, majd v�logassa sz�t az
    elemeket k�t csoportba: p�ros �s p�ratlan sz�mok.

    */

    Adatok a;
    Feltoltes(&a.tomb);
    Kiiras(&a.tomb);
    printf("\n");
    Paros(&a.tomb);
    printf("\n");
    Paratlan(&a.tomb);


    return 0;
}
void Feltoltes(Adatok *a)
{
    int i = 0; srand(time(0));

    for( i = 0; i < n; i++ )
    {
        a->tomb[i] = rand()%100+1;
    }
}
void Kiiras(Adatok *a)
{
    int i = 0;
    for( i = 0; i < n; i++ )
    {
        printf("%d, ", a->tomb[i]);
    }
}
void Paros(Adatok *a)
{
    int i = 0;
    for( i = 0; i < n; i++ )
    {
        if(a->tomb[i] % 2 == 0)
        {
            printf("%d, ", a->tomb[i]);
        }
    }
}
void Paratlan(Adatok *a)
{
    int i = 0;
    for( i = 0; i < n; i++ )
    {
        if(a->tomb[i] % 2 != 0)
        {
            printf("%d, ", a->tomb[i]);
        }
    }
}
