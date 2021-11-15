#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define n 255

void beolvasas(char *szoveg, int* meret);
char* forditva(char *szoveg, int meret);
char* konvertalas(char *szoveg, int meret);
char* Eszamlalas(char *szoveg, int meret);
int main()
{
    /*

    Sztringkezel� f�ggv�nyek �r�sa
    Inicializ�ljon, illetve olvasson be a szabv�nyos bemenetr�l egy sz�veget. Ezen a sz�vegen az al�bbi
    m�veleteket hajtsa v�gre.
    a) A sz�veg megford�t�sa, illetve ford�tott ki�r�sa.
    b) A sz�veg nagybet�ss� konvert�l�sa.
    c) A sz�vegben az 'E' bet�k megsz�mol�sa.
    A feladatot a procedur�lis programtervez�si alapelv betart�s�val oldja meg, azaz minden
    v�grehajtand� funkci�t k�l�n f�ggv�nyben val�s�tson meg.

    */

    int i = 0, db = 0, lepteto  = 0;
    char szoveg[n];
    char ch;

    int meret = 0;


    beolvasas(szoveg, &meret);
    forditva(szoveg, meret);
    konvertalas(szoveg, meret);
    Eszamlalas(szoveg, meret);


    return 0;
}
void beolvasas(char *szoveg, int* meret)
{
    printf("Kerek egy szoveget(!, ?, . a vegere KOTELEZO)!\n\t");
    char ch;
    int lepteto = 0;
    do
    {
        ch = getchar();
        szoveg[lepteto] = ch;
        lepteto++;
    }
    while(ch != '.' && ch != '!' && ch != '?');


    *meret = lepteto;
    return ;
}

char* forditva(char *szoveg, int meret)
{
    printf("\na) Forditva: \n\t");
    int i = 0;
    for(i = meret - 1; i >= 0; i--)
    {
        printf("%c ", szoveg[i]);
    }
    return ;
}

char* konvertalas(char *szoveg, int meret)
{
    printf("\nb) Nagybetus konvertalas: \n\t");
    int i = 0;
    for(i = 0; i < meret; i++)
    {
        printf("%c ", toupper(szoveg[i]));
    }
    return ;
}

char* Eszamlalas(char *szoveg, int meret)
{
    printf("\nc) 'E' betuk megszamlalasa: \n\t");
    int i = 0;
    int db = 0;
    for(i = 0; i < meret; i++)
    {
        if( szoveg[i] == 'E' )
        {
            db++;
        }
    }
    printf("%d db", db);
    return ;
}


