#include <stdio.h>
#include <stdlib.h>

typedef struct //Itt nev nem kotelezo!:)
{

    int ev;
    int honap;
    int nap;

}Datum;

void Beolvasas(Datum *d);
void Beolvasas_Kiiras(Datum d);
int osszehasonlitas_regebbi(Datum d1, Datum d2);

int main()
{
    /*

    Definiáljon dátum típust. Olvasson be két dátumot, és határozza meg melyik a régebbi.

    */

    Datum d1, d2; //Ket datum kell azert letezik d1, d2!

    printf("Kerem az elso datumot.(ev, honap, nap): \n");
    Beolvasas(&d1);
    Beolvasas_Kiiras(d1);

    printf("\n\n--- --- --- --- --- --- --- --- --- --- --- ---\n\n");

    printf("Kerek a masodik datumot.(ev, honap, nap): \n");
    Beolvasas(&d2);
    Beolvasas_Kiiras(d2);

    printf("\n\n--- --- --- --- --- --- --- --- --- --- --- ---\n\n");
    //printf("%d", osszehasonlitas_regebbi(d1, d2)); WORKING

    if(osszehasonlitas_regebbi(d1, d2) == 1)
    {
        printf("A regebbi datum: %d.%d.%d", d1.ev, d1.honap, d1.nap);
    }
    else if(osszehasonlitas_regebbi(d1, d2) == 2)
    {
        printf("A regebbi datum: %d.%d.%d", d2.ev, d2.honap, d2.nap);
    }


    return 0;
}

void Beolvasas(Datum *d)
{
    printf("\tEv: "); scanf("%d", &d->ev);
    printf("\tHonap: "); scanf("%d", &d->honap);
    printf("\tNap: "); scanf("%d", &d->nap);
}
void Beolvasas_Kiiras(Datum d)
{
    /*printf("%d", d.ev);
    printf("%d", d.honap);
    printf("%d", d.nap);*/
    printf("%d.%d.%d.", d.ev, d.honap, d.nap);
}
int osszehasonlitas_regebbi(Datum d1, Datum d2)
{

    int regebbi = 0;

    if(d1.ev == d2.ev)
    {
        if(d1.honap == d2.honap)
        {
            if(d1.nap > d2.nap)
            {
                regebbi = 2;
            }
            else
            {
                regebbi = 1;
            }
        }
        if(d1.honap > d2.honap)
        {
            regebbi = 2;
        }
        else
        {
            regebbi = 1;
        }
    }
    if(d1.ev > d2.ev)
    {
        regebbi = 2;
    }
    else
    {
        regebbi = 1;
    }



    return regebbi;
}
