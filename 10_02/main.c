#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    int x;
    int y;
    int r;

}Adatok;

void Beolvasas(Adatok *);
void Fedes(Adatok a1, Adatok a2);

int main()
{
    /*

    Egy geometriai programban k�r�k adatait kell t�rolni: k�z�ppont (x, y koordin�ta) �s sug�r(r).
    �llap�tsa meg k�t k�rr�l, hogy azok �tfedik-e egym�st. K�t k�r akkor van �tfed�sben, ha
    k�z�ppontjaik t�vols�ga kisebb, mint a sugaraik �sszege.

    */

    Adatok a1, a2;

    printf("Kerek egy koordinatat(x, y) es egy sugarat(r): \n");
    Beolvasas(&a1);

    printf("\n\n--- --- --- --- --- --- --- --- --- --- --- --- ---\n\n");

    printf("Kerek egy koordinatat(x, y) es egy sugarat(r): \n");
    Beolvasas(&a2);

    printf("\n");
    Fedes(a1, a2);



    /*printf("\n\n");

    printf("\tx: "); scanf("%d", &a2.x);
    printf("\ty: "); scanf("%d", &a2.y);
    printf("\tr: "); scanf("%d", &a2.r);*/


    return 0;
}
void Beolvasas(Adatok *a)
{
    printf("\tx: "); scanf("%d", &a->x);
    printf("\ty: "); scanf("%d", &a->y);
    printf("\tr: "); scanf("%d", &a->r);
}
void Fedes(Adatok a1, Adatok a2)
{
    int kozep_t = 0;
    if(a1.x > a2.x)
    {
        kozep_t = a1.x - a2.x;
    }
    else
    {
        kozep_t = a2.x - a1.x;
    }


    if(kozep_t < (a1.r + a2.r))
    {
        return (printf("VAN Atfades!"));
    }
    else
    {
        return (printf("NINCS Atfades!"));
    }
}
