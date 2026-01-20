#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void pierwsze(int tab[], int N)
{
    int i, j, k=0, suma=0;
    for(i=0; i<N; i++)
    {
        for(j=2; j<tab[i]; j++)
        {
            if(tab[i]%j==0)
                k=1;
        }
        if(k==0)
            suma=suma+tab[i];
        k=0;
    }
    printf("Suma liczb pierwszych: %d.\n", suma);
}

void tablica(int tab[], int N)
{
    int i;
    printf("\nTablica:\n\n");
    for(i=0; i<N; i++)
    {
        tab[i]=rand()%100+1;
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
    pierwsze(tab, N);
    return 0;
}