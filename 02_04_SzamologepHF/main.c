#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bekeres, a, b, eredmeny, maradek;
    char r;
    //double a, b, eredmeny, maradek = 0;

    do{
            printf("\n");
            printf("Kerem az ertekeket es logikai alapon azt, hogy szeretned e folytatni a szamolast a kovetkezo korben! (a, b, i/n): ");
            scanf("%d, %d, %c", &a, &b, &r);

            printf("Kerem valasszon az alabbiak kozul:\n\t(1) Osszeadas\n\t(2) Kivonas\n\t(3) Osztas\n\t(4) Szorzas\n\t");
            scanf("%d", &bekeres);

        switch(bekeres){
            case 1: eredmeny = (a + b);
            printf("Az osszeadas eredmenye: %d\n", eredmeny);
            break;

            case 2:
            if(a > b){
                eredmeny = (a - b);
            }else{
                eredmeny = (b - a);
            }
            printf("A kivonas eredmenye: %d\n", eredmeny);
            break;

            case 3: eredmeny = (a / b);
            if(a > b){
                eredmeny = (a / b);
                maradek = (a % b);
            }else{
                eredmeny = (b / a);
                maradek = (b % a);
            }
            printf("Az osztas eredmenye: %d | Maradeka: %d\n", eredmeny, maradek);
            break;

            case 4: eredmeny = (a * b);
            printf("A szorzas eredmenye: %d\n", eredmeny);
            break;
        }

    }while(r != 'n');

    /*
            printf("\n\tSzeretnel meg szamolni? [i/n]: ");
            scanf("%c", &r);
    */

    return 0;
}
