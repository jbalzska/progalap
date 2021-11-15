#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

     Készítsünk kalkulátort. Adjon meg két számot, és végezzen el rajtuk valamilyen aritmetikai
     mûveletet. Az eredményt irassa ki a képernyõre. Módosítsa úgy a programot, hogy kérje be a
     felhasználótól a számokat. Egész és valós értékekkel is próbálják ki!

     Aritmetikai operátorok: +, -, /, *, %
    */

    int a, b;
    a = 4;
    b = 8;
    int osszeg = a + b;
    int kulonbseg = b - a;
    int hanyados = b / a;
    int szorzat = a * b;
    int hanyados_szazalek = b % a;

    printf("Osszeg: %d | Kulonbseg: %d | Hanyados: %d | Szorzat: %d | Hanyados_szazalek(Maradek): %d", osszeg, kulonbseg, hanyados, szorzat, hanyados_szazalek);

    return 0;
}
