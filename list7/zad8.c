#include <stdio.h>


int main(void)
{
    int a, b, c, d;
    int min, max, suma;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    min = max = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;

    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    suma = a + b + c + d - min - max;
    printf("%lf\n", suma / 2.0);

    return 0;
}
