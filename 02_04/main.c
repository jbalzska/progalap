#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Adott a>0 és b>=0 számokra határozzuk meg a^b hatványértéket.

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
