#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Adjuk meg egy téglalap 2 oldalát és számítsuk ki a téglalap kerületét és területét.
    int a = 5;
    int b = 2;

    printf("\n\ta = %d | b = %d", a, b);
    printf("\n\tKerulet: %d\n", (2*a)+(2*b));
    printf("\tTerulet: %d", a*b);

    return 0;
}
