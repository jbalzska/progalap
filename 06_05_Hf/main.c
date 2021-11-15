#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Adottak egy egyetemi hallgat� eredm�nyei 6 f�l�vre vonatkoz�an (f�l�ves tanulm�nyi �tlagok)
    id�rendben. Keresse meg, hogy melyik f�l�vben volt a hallgat� tanulm�nyi eredm�nye 4,5 f�l�tt.
    Figyelem! Azt az esetet is kezelje, ha nem volt ilyen f�l�v; �s azt is ha t�bb ilyen f�l�v volt.

    */

    printf("Kerem a tanulmanyi atlagokat felevre lebontva! \n");
    int i = 0, n = 6;
    double atlagok[n];

    int ok = 0;
    char c;

    for(i = 0; i < n; i++)
    {

        do
        {
            ok = 1;
            printf("\t%d. atlag: ", i+1);

            if(scanf("%lf", &atlagok[i]) != 1 || (atlagok[i] > 5 || atlagok[i] < 1))
            {
                ok = 0;
                printf("\tHibas adat!");
                while((c = getchar()) != '\n');
            }
        }
        while(ok != 1);

    }

    int db = 0;
    for(i = 0; i < n; i++)
    {
        if(atlagok[i] > 4.5)
        {
            printf("\n%d. felevben nagyobb volt az atlag, mint 4.5!\n", i+1);
            db++;
        }
    }

    if(db == 0)
    {
        printf("\nA megadott felevekben nem volt nagyobb atlag, mint 4.5!\n");
    }


    return 0;
}
