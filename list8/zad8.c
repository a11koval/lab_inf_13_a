#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void parz(int *tabA, int l, int n, int a)
{
    int i, j=0, *tabB;
    tabB=malloc(sizeof(int)*l);
    if(!tabB) exit(-1);
    if(a==0)
        printf("\nTablica parzysta:\n\n");
    else
        printf("\nTablica nieparzysta:\n\n");
    while(j<l)
    {
        for(i=0;i<n;i++)
        {
            if(tabA[i]%2==a)
            {
                tabB[j]=tabA[i];
                printf("%3.d", tabB[j]);
                j++;
            }
        }
    }
    printf("\n\n");
    free(tabB);
}

int main()
{
    int *tab, i, l=0, m=0, n;
    srand((unsigned int)time(NULL));
    printf("Podaj rozmiar tablicy A: ");
    scanf("%d", &n);
    tab=malloc(sizeof(int)*n);
    if(!tab) exit(-1);
    printf("\nTablica A:\n\n");
    for(i=0;i<n;i++)
    {
        tab[i]=rand()%53+3;
        printf("%3.d", tab[i]);
        if(tab[i]%2==0)
            l++;
        else
            m++;
    }
    printf("\n\n");
    parz(tab, l, n, 0);
    parz(tab, m, n, 1);
    free(tab);
    return 0;
}