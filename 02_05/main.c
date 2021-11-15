#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*

    Írjon C programot, amely kiszámítja a háromszög területét oldalainak megadásával. Használja a
    Hérón képletet: t2 = s(s-a)(s-b)(s-c), ahol a, b, c a háromszög oldalainak a hossza és s a kerület fele.
    Ügyeljen a változók típusára! A terület meghatározásához használja a négyzetgyökvonást
    végrehajtó függvényt: double sqrt(double num). Ennek deklarációját a math.h standard header
    állomány tartalmazza. Figyelem! A math.h beépítése -lm kapcsolóval történik (linker opció).

    */

    int a = 0, b = 0, c = 0;
    double s = 0, t = 0, t2 = 0;

    printf("Adja meg a haromszog oldalainak erteket! (Rendre: a, b, c)");
    scanf("%d, %d, %d", &a, &b, &c);

    s = (double)(a + b + c) / 2;
    t2 = s*(s - a)*(s - b)*(s - c);
    t = sqrt(t2);

    printf("\nA haromszog terulete: %.2f | A haromszog kerulete: %d", t, a + b + c);



    return 0;
}
