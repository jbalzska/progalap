#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*

    Négyzetszámok keresése, kiírása

    */

    int bekeres = 0, i = 0, ok = 0;
    char c;

    do
    {
        ok = 1;
        printf("\nAdjon meg egy szamot! ");
        if(scanf("%d", &bekeres) != 1)
        {
            ok = 0;
            printf("\nHibas adat!");
            while((c =  getchar()) != '\n');
        }
    }
    while(ok != 1);



    int gyok = 0;
    for(i = 1; i < bekeres; i++)
    {
        gyok = sqrt((double) negyzetszam_db(i));
    }


    return 0;
}
int negyzetszam_db(int a)
{
    int gyok = sqrt((double) a);
    if(gyok*gyok == a)
    {
        return( printf("%d, ", a) );
    }
}

