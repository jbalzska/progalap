#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    /*

    Megadott billenty� (Esc vagy q) le�t�s�ig olvasson be karaktereket a billenty�zetr�l. Oldja meg az
    al�bbi feladatokat. Elker�lhet�-e a t�mb adatszerkezet haszn�lata?
    a) A le�t�tt karakterek h�ny sz�zal�ka mag�nhangz�?
    b) �rja vissza a k�perny�re a karaktereket ford�tott sorrendben.
    c) A le�t�tt karakterek k�z�tt szerepel-e �E� �s utolj�ra h�nyadik helyen?

    */


    char mgh[] = {'a', 'e', 'i', 'o', 'u'};
    int meret = sizeof(mgh) / sizeof(char);
    char c;
    char tomb[255];
    int mgh_db = 0, db = 0;

    printf("\n Adjon meg karaktereket! (q/Q/Esc leuteseig a program fut!)\n\t");
    do
    {

        c = getchar();

        for(int i = 0; i < meret; i++)
        {
            if(mgh[i] == tolower(c))
            {
                mgh_db++;
            }
        }
        tomb[db] = c;
        db++;
    }
    while(tolower(c) != 'q');

    printf("\n\t\tMgh_db: %d | Msh_db: %d", mgh_db, db - mgh_db);

    double szazalek = ((double) mgh_db / db) * 100;

    printf("\n\n\ta) A leutott karakterek %.2f szazaleka maganhangzo!", szazalek);

    printf("\n\n\tb) Karakterek forditott sorrendben!\n\t\t");

    for(int i = db - 1; i >= 0; i--)
    {
        printf("%c, ", tomb[i]);
    }

    printf("\n\n\tc) E betu keresese!");

    int index = -1;
    for(int i = 0; i < db; i++)
    {
        if(tomb[i] == 'E')
        {
            index = i;
        }
    }

    if(index > -1)
    {
        printf("\n\n\tLetezik E a karaktersorozatban, meghozza a(z) %d. indexen!\n", index);
    }
    else
    {
        printf("\n\n\tNem letezik E a karaktersorozatban!\n");
    }

    return 0;
}
