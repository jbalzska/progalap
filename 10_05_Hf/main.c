#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    int x;
    int y;
    int hossz;

}Adatok;

void Bekeres(Adatok *);
int main()
{
    /*

    Geometriai programban egy négyzetet az oldalhosszúságával és a bal felsõ csúcsának
    koordinátáival adunk meg. Határozza meg a négyzet középpontjának (az átló felezõpontjának)
    koordinátáit.

    */

    Adatok a;
    Bekeres(&a);
    Kozeppont(a);


    return 0;
}
void Bekeres(Adatok *a)
{
    printf("x: "); scanf("%d", &a->x);
    printf("y: "); scanf("%d", &a->y);
    printf("hossz: "); scanf("%d", &a->hossz);
}
void Kozeppont(Adatok a)
{

    int Ax = a.x;
    int Ay = a.y - a.hossz;

    int Dx = Ax + a.hossz;
    int Dy = Ay;

    double Cx = Ax + ((double) a.hossz / 2);
    double Cy = Ay + ( (double) a.hossz / 2);

    printf("\nA(%d;%d)\n", Ax, Ay);
    printf("D(%d;%d)\n", Dx, Dy);
    printf("C(%.1f;%.1f)\n", Cx, Cy);

    //printf("(%d;%d) a kozeppont koordinataja!");
}
