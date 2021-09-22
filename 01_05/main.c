#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*
    Írjon C programot, amely kiszámítja a háromszög területét oldalainak megadásával. Használja a
    Hérón képletet:
    t(a masodikon)= s(s-a)(s-b)(s-c), ahol a, b, c a háromszög oldalainak a hossza és s a kerület fele.
    Ügyeljen a változók típusára! A terület meghatározásához használja a négyzetgyökvonást
    végrehajtó függvényt: double sqrt(double num). Ennek deklarációját a math.h standard header
    állomány tartalmazza. Figyelem! A math.h beépítése -lm kapcsolóval történik (linker opció).
    */

    int a, b, c;
    double s, eredmeny_gyok, eredmeny;

    printf("Kerem a haromszog oldalit! (a, b, c): ");
    do{

    scanf("%d, %d, %d", &a, &b, &c);

    }while((a + b) < c || (a + c) < b || (b + c) < a);

    s = (double) (a + b + c) / 2; //a, b, c egész számok, s-nek pedig doublenak kell lennie!
    eredmeny_gyok = s*(s-a)*(s-b)*(s-c);
    eredmeny = sqrt(eredmeny_gyok);

    printf("A haromszog terulete Heron keplettel: %.2f", eredmeny);

    return 0;
}
