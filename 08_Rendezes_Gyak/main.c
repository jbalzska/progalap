#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 20

void Feltoltes(int *);
void Kiiras(int *);
void RendezesKozvetlenKivalasztassal(int *);
void RendezesMinimumKivalasztassal(int *);
void BuborekRendezes(int *);
void BeszuroRendezes(int *);

int main()
{
    int tomb[n];

    Feltoltes(&tomb);

    printf("\n\n\tEredeti tomb: \n");
    Kiiras(&tomb);

    printf("\n\n\tRendezesKozvetlenKivalasztassal: \n");
    RendezesKozvetlenKivalasztassal(&tomb);

    printf("\n\n\tRendezesMinimumKivalasztassal: \n");
    RendezesMinimumKivalasztassal(&tomb);

    printf("\n\n\tBuborekRendezes: \n");
    BuborekRendezes(&tomb);

    printf("\n\n\tBeszuroRendezes: \n");
    BeszuroRendezes(&tomb);

    printf("\n\n\tShuffling: \n");
    Shuffling(&tomb);


    return 0;
}
void Feltoltes(int *tomb)
{
    int i = 0;
    srand(time(0));

    for( i = 0; i < n; i++ )
    {
        tomb[i] = rand()%30+20;
    }

    return ;
}
void Kiiras(int *tomb)
{
    int i = 0;
    for( i = 0; i < n; i++ )
    {
        printf(" %d, ", tomb[i]);
    }

    return ;
}
void RendezesKozvetlenKivalasztassal(int *tomb)
{
    int i = 0, j = 0, csere = 0;

    while(i <= n - 1)
    {
        j = i + 1;

        while(j <= n)
        {
            if(tomb[j] < tomb[i])
            {
                csere = tomb[j];
                tomb[j] = tomb[i];
                tomb[i] = csere;
            }
            j++;
        }
        i++;
    }


    for(i = 0; i < n; i++)
    {
        printf(" %d, ", tomb[i]);
    }
}
void RendezesMinimumKivalasztassal(int *tomb)
{
    int i = 0, j = 0, min = 0;

    while(i <= n - 1)
    {
        min = tomb[i];
        j = i + 1;
        while(j <= n)
        {
            if(tomb[j] < min)
            {
                min = tomb[j];
            }
            j++;
        }
        i++;
    }

    for(i = 0; i < n; i++)
    {
        printf(" %d, ", tomb[i]);
    }
}
void BuborekRendezes(int *tomb)
{
    int i = 0, j = 0, csere = 0;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(tomb[j] > tomb[j + 1])
            {
                csere = tomb[j];
                tomb[j] = tomb[j + 1];
                tomb[j + 1] = csere;
            }
        }
    }

    for( i = 0; i < n; i++ )
    {
        printf(" %d, ", tomb[i]);
    }
}
void BeszuroRendezes(int *tomb)
{
    int i = 1, j = 0, seged = 0;

    while(i <= n)
    {
        j = i - 1;
        seged = tomb[i];
        while(j > 0 && seged < tomb[j])
        {
            tomb[j + 1] = tomb[j];
            j = j--;
        }
        tomb[j + 1] = seged;
        i++;
    }

    for( i = 0; i < n; i++)
    {
        printf(" %d, ", tomb[i]);
    }
}
void Shuffling(int *tomb)
{
    int i = 0, j = 0, csere = 0;

    for(i = 0; i < n; i++)
    {
        if( i != j )
        {
            csere = tomb[i];
            tomb[i] = tomb[j];
            tomb[j] = csere;
        }
    }

    for(i = 0; i < n; i++)
    {
        printf(" %d, ", tomb[i]);
    }

}
