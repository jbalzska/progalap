#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Adott a>0 �s b>=0 sz�mokra hat�rozzuk meg a^b hatv�ny�rt�ket.

    int a, b, ertek;
    printf("Kernem a hatvany alapot es a kitevot! (a, b): ");
    scanf("%d, %d", &a, &b);


    while(!(a > 0 && b >= 0)){

    printf("Hibas adatok! Kernem a hatvany alapot es a kitevot! (a, b): ");
    scanf("%d, %d", &a, &b);

    }

    ertek = pow(a, b);
    printf("\tErtek: %d", ertek);

    return 0;
}
