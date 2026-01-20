#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void przesun(int tab[], int N)
{
    int i, j, suma=0;
    do
    {
        printf("\nJak przesunac tablice(0-w lewo, 1-prawo): ");
        scanf("%d", &j);
    }
    while(j!=0 && j!=1);
    printf("\nPrzesunieta tablica:\n\n");
    if(j==0)
    {
        j=tab[0];
        for(i=0;i<N-1;i++)
        {
            tab[i]=tab[i+1];
        }
        tab[N-1]=j;
    }
    else
    {
        j=tab[N-1];
        for(i=N-1;i>0;i--)
        {
            tab[i]=tab[i-1];
        }
        tab[0]=j;
    }
    for(i=0;i<N;i++)
    {
        printf("%5.d", tab[i]);
    }
}

void tablica(int tab[], int N)
{
    int i;
    printf("\nTablica:\n\n");
    for(i=0; i<N; i++)
    {
        tab[i]=rand()%24+1;
        printf("%5.d", tab[i]);
    }
    printf("\n\n");
}

int main()
{
    #define N 24
    int tab[N];
    srand((unsigned int)time(NULL));
    tablica(tab, N);
    przesun(tab, N);
    return 0;
}