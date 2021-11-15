#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Írjon C programot, amely felcserélni két egész szám értékét. A két számot a felhasználó adja meg.

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
