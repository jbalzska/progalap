#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Adjuk meg egy t�glalap 2 oldal�t �s sz�m�tsuk ki a t�glalap ker�let�t �s ter�let�t.
    int a = 5;
    int b = 2;

    printf("\n\ta = %d | b = %d", a, b);
    printf("\n\tKerulet: %d\n", (2*a)+(2*b));
    printf("\tTerulet: %d", a*b);

    return 0;
}
