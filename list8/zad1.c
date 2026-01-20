#include <stdio.h>
        

int main(void)
{
    int tab[5], i;

    for (i = 0; i < 5; i++)
        scanf("%d", &tab[i]);

    for (i = 0; i < 5; i++)
        printf("%d ", tab[i]);

    return 0;
}
