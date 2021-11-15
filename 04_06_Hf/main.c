#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Három megadott számról döntse el, hogy lehetnek-e egy háromszög oldalai.

    */

    int a, b, c;
    printf("Kerem a haromszog oldalainak erteket! (a, b, c):\n\t");
    scanf("%d, %d, %d", &a, &b, &c);

    if((a + b) > c && a != 0 && b != 0 && c != 0) //ket oldal osszegenek nagyobbnak kell lennie, mint a harmadik oldal erteke.
    {
        printf("Lehetseges adatok egy 3szog oldalainak.");
    }
    else
    {
        printf("Ilyen 3szog nem letezik.");
    }

    return 0;
}
