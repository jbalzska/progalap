#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Készítsen C programot, amely bekéri egy téglatest három oldalának hosszát és kiszámítja
    annak felszínét (A = 2 * (a*b + a*c + b*c)) és térfogatát (V = a*b*c). A felszín számításánál
    ügyeljen a helyes zárójelezésre!

    */
    int a = 0, b = 0, c = 0, felszin = 0, terfogat = 0;

    printf("Kerem a teglatest harom oldalanak hosszat! (Rendre: a, b, c) ");
    scanf("%d, %d, %d", &a, &b, &c);

    felszin = 2*(a*b + a*c + b*c);
    terfogat = a * b * c;

    printf("Felszin: %d cm2 | Terfogat: %d cm3", felszin, terfogat);




    return 0;
}
