#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    �rjunk kalkul�tor programot, amely k�pes a 4 alapm�velet v�grehajt�s�ra. Ne enged�lyezze a 0-
    val val� oszt�st! Legyen a program folyamatos m�k�d�s�. Am�g a felhaszn�l� ki nem l�p a
    programb�l, fogadja az inputot �s sz�mol. �gyeljen a karakter beolvas�sra!

    */
    int ok = 0;
    do
    {

    printf("MENU\n Kerem adjon meg ket szamot(Rendre: a, b) es valasszon az alabbi lehetoseg kozul\n\t(1) Osszeadas\n\t(2) Kivonas\n\t(3) Szorzas\n\t(4) Osztas");
    int a = 0, b = 0, bekeres = 0, eredmeny =0;

    printf("\n Adja meg a ket szamot(a, b): ");
    scanf("%d, %d", &a, &b);

    printf(" Adja meg a megfeleo szamot: ");
    scanf("%d", &bekeres);

    switch(bekeres)
    {
        case 1:
            eredmeny = a + b;
            printf("\n\t%d + %d = %d", a, b, eredmeny);
        break;

        case 2:
            eredmeny = a - b;
            printf("\n\t%d - %d = %d", a, b, eredmeny);
        break;

        case 3:
            eredmeny = a * b;
            printf("\n\t%d * %d = %d", a, b, eredmeny);
        break;

        case 4:
            eredmeny = a / b;
            printf("\n\t%d / %d = %d | Maradek: %d", a, b, eredmeny, a % b);
        break;

        default:
            printf("Hibas adat!");
            break;
    }
    printf("\nMeg egy szamolas? (0 -igen | 1 - nem): ");
    scanf("%d", &ok);

    printf("\n");

    }
    while(ok != 1);



    return 0;
}
