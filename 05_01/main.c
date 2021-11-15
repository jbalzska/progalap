#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define n 5

int main()
{
    /*

    Lott�sorsol�s. �rjon C programot, amely el��ll�tja az �t�slott� heti nyer�sz�mait.
    Megold�s: A program 1 �s 90 k�z�tt �ll�t el� 5 k�l�nb�z� v�letlensz�mot.
    Megoldhat�-e a feladat t�mb haszn�lata n�lk�l?

    */

    srand(time(0));
    int i = 0, j = 0;
    int lotto[n];

    for(i = 0; i < n;)
    {
        lotto[i] = rand()%5+1;

        for(j = 0; j < i; j++)
        {
            if(lotto[j] == lotto[i])
            {
                break;
            }
        }

        if(j == i)
        {
            lotto[i] = lotto[j];
            i++;
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d, ", lotto[i]);
    }

    return 0;
}
