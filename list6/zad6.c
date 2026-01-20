#include <stdio.h>


double bmi(double masa, double wzrost)
{
    return masa / (wzrost * wzrost);
}

int main(void)
{
    printf("%lf\n", bmi(70, 1.75));
    return 0;
}
