#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int t[20], i, j, tmp;

    srand((unsigned int)time(NULL));

    for (i = 0; i < 20; i++)
        t[i] = rand() % 501 - 250;

    for (i = 0; i < 19; i++)
        for (j = i + 1; j < 20; j++)
            if (t[j] < t[i]) {
                tmp = t[i];
                t[i] = t[j];
                t[j] = tmp;
            }

    for (i = 0; i < 20; i++)
        printf("%d ", t[i]);

    return 0;
}
