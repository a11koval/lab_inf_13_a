#include <stdio.h>

int main(void)
{
    int x, min, max;
    scanf("%d", &x);

    min = max = x;

    while (x != 0) {
        if (x < min) min = x;
        if (x > max) max = x;
        scanf("%d", &x);
    }

    printf("min = %d\nmax = %d\n", min, max);
    return 0;
}
