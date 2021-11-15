#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Készítsen C programot, amely bekéri egy téglatest három oldalának hosszát és kiszámítja
    annak felszínét (A = 2 * (a*b + a*c + b*c)) és térfogatát (V = a*b*c). A felszín számításánál
    ügyeljen a helyes zárójelezésre!

    */

    int a, b ,c;
    printf("Kernem az oldalak ertekeket! (a, b, c): ");
    scanf("%d, %d, %d", &a, &b, &c);
    int A, V;
    A = 2 * (a*b + a*c + b*c);
    V = a*b*c;

    printf("Felszin: %d | Terfogat: %d", A, V);

    return 0;
}
