#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void zamiana(int tab[], int N)
{
    int i;
    printf("\nZamieniona tablica:\n");
    for(i=0; i<N; i++)
    {
        if(tab[i]>0)
            tab[i]=0;
        else
            tab[i]=abs(tab[i]);
        printf("%5.d", tab[i]);
    }
}

void tablica(int tab[], int N)
{
    int i;
    printf("\nTablica:\n\n");
    for(i=0; i<N; i++)
    {
        tab[i]=rand()%151-75;
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
    zamiana(tab, N);
    return 0;
}