#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Karaktervizsg�lat.
    a) Eld�nteni egy megadott karakterr�l, hogy benne van-e az abc-ben, illetve mag�nhangz�-e.

    b) Egy adott karakter (Q) lenyom�s�ig olvasson be a billenty�zetr�l karaktereket. Sz�molja meg,
    h�ny mag�nhangz� volt k�z�tt�k.

    */


    char karakter;
    char c;
    int ok_nemok = 0;

    do
    {

        printf("\nKerek egy karaktert! \n\t");
        scanf("%c", &karakter);
        c = getchar();

            if((karakter >= 'a' && karakter <= 'z') || (karakter >= 'A' && karakter <= 'Z'))
            {
                    if(karakter == 'a' || karakter == 'e' || karakter == 'i' || karakter == 'o' || karakter == 'u' || karakter == 'A' || karakter == 'E' || karakter == 'I' || karakter == 'O' || karakter == 'U')
                    {
                        printf("A(z) %c maganhangzo!", karakter);
                    }
                    else
                    {
                        printf("A(z) %c massalhangzo!", karakter);
                    }
            }
            else
            {
                printf("Nem az ABC tagja!");
            }

    }
    while(karakter != 'q' && karakter != 'Q');


    return 0;
}
