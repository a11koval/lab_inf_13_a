#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rowne(int tab[], int N)
{
    int i, j, suma=0;
    printf("\nElementy tablicy o wartosci rownej indeksowi: ");
    for(i=0; i<N; i++)
    {
        j=tab[i];
        if(j==i)
            printf("%5.d", j);
    }
    printf("\n");
}

void tablica(int tab[], int N)
{
    int i;
    printf("\nTablica:\n\n");
    for(i=0; i<N; i++)
    {
        tab[i]=rand()%72+1;
        printf("%5.d", tab[i]);
    }
    printf("\n\n");
}

int main()
{
    #define N 72
    int tab[N];
    srand((unsigned int)time(NULL));
    tablica(tab, N);
    rowne(tab, N);
    return 0;
}