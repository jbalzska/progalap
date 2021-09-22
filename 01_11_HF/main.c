#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Írjon C programot, amely beolvas két egész számot, és kiírja az osztás eredményét az alábbi
    formában: osztandó / osztó = hányados, maradék x. Ugyanezt oldja meg valós (double
    típusú) számokkal is. Az osztási maradék kiszámításához használja a math.h double
    fmod(double, double) függvényét.

    */

    int a, b;
    int eredmeny;
    int maradek;

    printf("Kernek ket egesz szamot! (a, b)");
    scanf("%d, %d", &a, &b);

    if(a > b){
        eredmeny = a / b;
        maradek = a % b;
        printf("%d / %d = %d | Maradek: %d", a, b, eredmeny, maradek);
    }
    else{
        eredmeny = b / a;
        maradek = b % a;
        printf("%d / %d = %d | Maradek: %d", b, a, eredmeny, maradek);
    }

    return 0;
}
