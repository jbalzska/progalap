#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Adjunk meg egy sz�mot, �s d�nts�k el r�la hogy p�ros vagy p�ratlan. Felt�teles oper�torral:

    */

    int bekeres = 0;
    printf("Kerek egy egesz szamot! ");
    scanf("%d", &bekeres);

    if(bekeres % 2 == 0)
    {
        printf("Paros");
    }
    else
    {
        printf("Paratlan");
    }

    printf("\n");

    printf((bekeres % 2 == 0) ? "Paros" : "Paratlan");

    printf("\n");

    switch(bekeres % 2)
    {
        case 0:
            printf("Paros");
        break;

        case 1:
            printf("Paratlan");
        break;
    }

    printf("\n");


    return 0;
}
