#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void trojka(int tab[], int N)
{
    int i, m, suma=0;
    printf("\nPodaj liczbe calkowita: ");
    scanf("%d", &m);
    printf("\nTrojki w tablicy:\n\n");
    for(i=0; i<N-3; i++)
    {
        if(tab[i]==m-2 && tab[i+1]==m && tab[i+2]==m+2)
            printf("%d[%d] %d[%d] %d[%d]\n", tab[i], i, tab[i+1], i+1, tab[i+2], i+2);
    }
}

void tablica(int tab[], int N)
{
    int i;
    printf("\nTablica:\n\n");
    for(i=0; i<N; i++)
    {
        tab[i]=rand()%5+1;
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
    trojka(tab, N);
    return 0;
}