#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    �rjon C programot, amely beolvas k�t eg�sz sz�mot, �s ki�rja az oszt�s eredm�ny�t az al�bbi
    form�ban: osztand� / oszt� = h�nyados, marad�k x. Ugyanezt oldja meg val�s (double
    t�pus�) sz�mokkal is. Az oszt�si marad�k kisz�m�t�s�hoz haszn�lja a math.h double
    fmod(double, double) f�ggv�ny�t.

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
