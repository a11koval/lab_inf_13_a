#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void tabsuma(int m, int *suma)
{
    int i, n, *tab;
    *suma=0;
    printf("Podaj rozmiar tablicy %d: ", m);
    scanf("%d", &n);
    tab=malloc(sizeof(int)*n);
    if(!tab) return(-1);
    for(i=0;i<n;i++)
    {
        tab[i]=rand()%20+1;
        *suma=*suma+tab[i];
    }
    free(tab);
    printf("Suma elementow tablicy %d: %d.\n\n", m, *suma);
}

int porow(int suma1, int suma2)
{
    if(suma1==suma2)
        return 1;
    else
        return 0;
}

int main()
{
    int suma1, suma2;
    srand((unsigned int)time(NULL));
    tabsuma(1, &suma1);
    tabsuma(2, &suma2);
    if(porow(suma1, suma2)==1)
        printf("\nSumy elementow dwoch tablic sa rowne.\n");
    else
        printf("\nSumy elementow dwoch tablic nie sa rowne.\n");
    return 0;
}