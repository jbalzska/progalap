#include <stdio.h>
#include <stdlib.h>

int main()
{

    //�rjon C programot, amely felcser�li k�t eg�sz sz�m �rt�k�t. A k�t sz�mot a felhaszn�l� adja meg.

    int a, b, c;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    c = a; //c-nek adom az erteket, ezert c = a es nem a = c
    a = b;
    b = c;


    printf("A ket betu erteket felcsereljuk! Igy most a = %d es b = %d", a, b);

    return 0;
}
