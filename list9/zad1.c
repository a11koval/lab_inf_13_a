#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int sumatab(int a, int tab[], int N)
{
    int i, suma=0;
    for(i=0; i<N; i++)
    {
        if(tab[i]%2==a)
            suma=suma+tab[i];
    }
    return(suma);
}

int ileparz(int tab[], int N)
{
    int i, j=0;
    for(i=0; i<N; i++)
    {
        if(tab[i]%2==0 && tab[i]%3==0 && tab[i]<101)
            j++;
    }
    return(j);
}

void tablica(int tab[], int N)
{
    int i;
    printf("\nTablica:\n\n");
    for(i=0; i<N; i++)
    {
        tab[i]=1+rand()%151;
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
    printf("Suma liczb parzystych: %d.\n", sumatab(0, tab, N));
    printf("Suma liczb nieparzystych: %d.\n", sumatab(1, tab, N));
    printf("Liczb parzystych podzielnych przez 6 w zakresie <1,100>: %d.\n", ileparz(tab, N));
    return 0;
}