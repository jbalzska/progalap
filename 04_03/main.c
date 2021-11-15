#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Karaktervizsgálat.
    a) Eldönteni egy megadott karakterrõl, hogy benne van-e az abc-ben, illetve magánhangzó-e.

    b) Egy adott karakter (Q) lenyomásáig olvasson be a billentyûzetrõl karaktereket. Számolja meg,
    hány magánhangzó volt közöttük.

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
