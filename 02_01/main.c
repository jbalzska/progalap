#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Adjunk meg egy sz�mot, �s d�nts�k el r�la hogy p�ros vagy p�ratlan. Felt�teles oper�torral.

    int a;
    printf("Kerek egy egesz szamot: ");
    scanf("%d", &a);

    if(a % 2 == 0){
        printf("\tParos");
    }else{
        printf("\tParatlan");
    }

    int b;
    printf("\nKerek egy egesz szamot: ");
    scanf("%d", &b);
    printf((b % 2 == 0) ? "\tParos" : "\tParatlan");

    int c;
    printf("\nKerek egy egesz szamot: ");
    scanf("%d", &c);
    switch(c % 2){
        case 0: printf("\tParos"); break;
        case 1: printf("\tParatlan"); break;
    }

    return 0;
}
