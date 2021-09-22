#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Egy adott szám osztóinak megszámolása elöltesztelõ ciklussal.

    int i, n, db = 0;
    printf("Kerek egy egesz szamot(addig fog menni a ciklus)! ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
            if(i % 2 == 0){
                db++;
            }
    }

    printf("\tAz %d-ig tarto ciklusban %d db paros szam talalhato!", n, db);

    /* --- */

    int i2, n2, db2 = 0;
    printf("\nKerek egy egesz szamot(-||-)! ");
    scanf("%d", &n2);
    i2 = 1;
    while(i2 <= n2){
        if(i2 % 3 == 0){
            db2++;
        }
        i2++;
    }

    printf("\tAz %d-ig tarto ciklusban %d db harommal oszthato szam talalhato!", n2, db2);

    /* --- */

    int i3, n3, db3 = 0;
    printf("\nKerek egy egesz szamot(-||-)! ");
    scanf("%d", &n3);
    i3 = 1;

    do{

        if(i3 % 4 == 0){
            db3++;
        }
        i3++;

    }while(i3 <= n3);

    printf("\tAz %d-ig tarto ciklusban %d db neggyel oszthato szam talalhato!", n3, db3);

    return 0;
}
