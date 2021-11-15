#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Készítsünk kalkulátort. Adjon meg két számot, és végezzen el rajtuk valamilyen aritmetikai
    mûveletet. Az eredményt irassa ki a képernyõre. Módosítsa úgy a programot, hogy kérje be a
    felhasználótól a számokat. Egész és valós értékekkel is próbálják ki!

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
