#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Megadott intervallumban keresse meg a barátságos számpárokat. A barátságos
    számpároknál az egyik szám önmagánál kisebb osztóinak összege a másik számmal egyenlõ és
    fordítva. Pl.: (220;284) (1184;1210) (2620;2924) (5020;5564) (6232;6368)

    */

    int also = 0, felso = 0, osszeg = 0, i = 0;

    beolvasas(&also, &felso);
    /*min(also);
    max(felso);*/

    printf("A(z) %d osztoinak osszege: %d | A(z) %d osztoinak osszege: %d", also, osztok(also), felso, osztok(felso));

    /*osztok(also); //WORKING
    osztok(felso);*/



    if((osztok(also) == felso) || (osztok(felso) == also))
    {
        printf("\n\n\tA megadott ket ertek baratsagos szamparok!");
    }




    return 0;
}
void beolvasas(int a, int b)
{
    int ok = 0;
    char c;

    do
    {
        ok = 1;
        printf("\nKerek ket szamot! (a, b): ");
        if(scanf("%d, %d", a, b) != 2)
        {
            ok = 0;
            printf("\nHibas adat!");
            while((c = getchar()) != '\n');
        }
    }
    while(ok != 1);
}
int osztok(int c)
{
    int i = 0, osszeg = 0;
    for(i = 1; i < c; i++)
    {
        if(c % i == 0)
        {
            osszeg += i;
        }
    }
    return osszeg;
}

