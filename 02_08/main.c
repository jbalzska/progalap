#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    �rjon C programot, amely felcser�lni k�t eg�sz sz�m �rt�k�t. A k�t sz�mot a felhaszn�l� adja meg.

    */

    int a = 0, b = 0, c = 0;
    printf("Kerem a ket valtozo erteket(Rendre: a, b)! ");
    scanf("%d, %d", &a, &b);

    c = a;
    a = b;
    b = c;


    printf("A csere utan a kovetkezo lathato: a = %d b = %d", a, b);




    return 0;
}
