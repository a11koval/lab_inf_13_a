#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int t[6], i, j, x, ok;

    srand((unsigned int)time(NULL));

    for (i = 0; i < 6; i++) {
        do {
            ok = 1;
            x = rand() % 49 + 1;
            for (j = 0; j < i; j++)
                if (t[j] == x)
                    ok = 0;
        } while (!ok);
        t[i] = x;
    }

    for (i = 0; i < 6; i++)
        printf("%d ", t[i]);

    return 0;
}
