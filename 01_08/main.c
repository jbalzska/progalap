#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Írjon C programot, amely felcseréli két egész szám értékét. A két számot a felhasználó adja meg.

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
