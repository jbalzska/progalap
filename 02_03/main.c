#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    K�sz�ts�nk kalkul�tort. Adjon meg k�t sz�mot, �s v�gezzen el rajtuk valamilyen aritmetikai
    m�veletet. Az eredm�nyt irassa ki a k�perny�re. M�dos�tsa �gy a programot, hogy k�rje be a
    felhaszn�l�t�l a sz�mokat. Eg�sz �s val�s �rt�kekkel is pr�b�lj�k ki!

    */

    double szam1 = 0;
    double szam2 = 0;

    printf("Kerem a ket szamot szamot (Rendre: a, b): ");
    scanf("%lf, %lf", &szam1, &szam2);

    double osszeadas = szam1 + szam2;

    //Szamaolas resz
    printf("\n\n\tOsszeadas: %.2f\n\tKivonas: %.2f\n\tSzorzas: %.2f\n\tOsztas: %.2f", szam1 + szam2, szam1 - szam2, szam1 * szam2, szam1 / szam2);


    return 0;
}
