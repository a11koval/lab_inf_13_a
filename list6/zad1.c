#include <stdio.h>


int parzysta(int x)
{
    if (x % 2 == 0) return 1;
    return 0;
}

int main(void)
{
    int a = 6;
    printf("%d\n", parzysta(a));
    return 0;
}
