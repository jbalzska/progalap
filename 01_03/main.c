#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

     K�sz�ts�nk kalkul�tort. Adjon meg k�t sz�mot, �s v�gezzen el rajtuk valamilyen aritmetikai
     m�veletet. Az eredm�nyt irassa ki a k�perny�re. M�dos�tsa �gy a programot, hogy k�rje be a
     felhaszn�l�t�l a sz�mokat. Eg�sz �s val�s �rt�kekkel is pr�b�lj�k ki!

     Aritmetikai oper�torok: +, -, /, *, %
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
