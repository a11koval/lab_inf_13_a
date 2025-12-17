#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int x, g, kroki = 0;

    srand((unsigned int)time(NULL));
    x = rand() % 10;

    do {
        scanf("%d", &g);
        kroki++;

        if (g < x) printf("za malo\n");
        else if (g > x) printf("za duzo\n");

    } while (g != x);

    printf("Odgadniete w %d krokach\n", kroki);
    return 0;
}
