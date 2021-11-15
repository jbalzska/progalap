#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Adottak egy egyetemi hallgató eredményei 6 félévre vonatkozóan (féléves tanulmányi átlagok)
    idõrendben. Keresse meg, hogy melyik félévben volt a hallgató tanulmányi eredménye 4,5 fölött.
    Figyelem! Azt az esetet is kezelje, ha nem volt ilyen félév; és azt is ha több ilyen félév volt.

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
