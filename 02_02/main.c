#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Egy megadott szám abszolút értékének meghatározása (szelekciós utasítással).

    int a;
    printf("Kerek egy egesz szamot! ");
    scanf("%d", &a);

    if(a < 0){
        a *= (-1);
    }

    printf("\tA megadott szam abszolut erteke: %d!", a);

    return 0;
}
