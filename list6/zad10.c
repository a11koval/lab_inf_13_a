#include <stdio.h>
#include <math.h>

void kwadratowe(double a, double b, double c)
{
    double d = b*b - 4*a*c;

    if (d < 0)
        printf("Brak pierwiastkow\n");
    else if (d == 0)
        printf("x = %lf\n", -b/(2*a));
    else {
        printf("x1 = %lf\n", (-b - sqrt(d))/(2*a));
        printf("x2 = %lf\n", (-b + sqrt(d))/(2*a));
    }
}

int main(void)
{
    kwadratowe(1, -5, 6);
    return 0;
}
