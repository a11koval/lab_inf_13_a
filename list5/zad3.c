#include <stdio.h>


int max3(int a, int b, int c)
{
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main(void)
{
    printf("%d\n", max3(4, 9, 2));
    return 0;
}
