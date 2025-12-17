#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int tab[50], i;

    srand((unsigned int)time(NULL));

    for (i = 0; i < 50; i++)
        tab[i] = rand() % 25;

    for (i = 0; i < 50; i++)
        printf("%d ", tab[i]);

    return 0;
}
