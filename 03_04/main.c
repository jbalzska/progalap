#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

     Egy adott sz�m oszt�inak megsz�mol�sa el�ltesztel� ciklussal.

    */


    int szam = 0;
    printf("Kerek egy egesz szamot, amelynek megmondom mely szamok az osztoi: ");
    scanf("%d", &szam);

    int i = 0, db = 0;

    for(i = 1; i <= szam; i++)
    {
        if(szam % i == 0)
        {
            printf("%d, ", i);
            db++;
        }
    }

    printf("\n%d osztoja van a %d -nak/nek", db, szam);

    return 0;
}
