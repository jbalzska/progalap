#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ember
{
    char nev[50];
    int kor;
    float suly;
}ember;


int main()
{
    /*struct ember a; WORKING typedef nelkul!
    a.kor = 5;*/

    /*ember a; WORKING typedef jelenletevel!
    a.kor = 5;*/

    ember a;
    strcpy(a.nev, "Balazs"); //<string.h>
    a.kor = 19;
    a.suly = 71.5;

    printf("Nev: %s | Kor: %d | Suly: %.1f", a.nev, a.kor, a.suly);

    return 0;
}
