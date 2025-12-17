#include <stdio.h>


double srednia(double a, double b, double c)
{
    return (a + b + c) / 3;
}

int main(void)
{
    printf("%lf\n", srednia(3, 6, 9));
    return 0;
}
