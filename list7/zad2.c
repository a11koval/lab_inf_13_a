#include <stdio.h>  

int pitagoras(int a, int b, int c)
{
    return (a*a + b*b == c*c) ||
           (a*a + c*c == b*b) ||
           (b*b + c*c == a*a);
}

int main(void)
{
    printf("%d\n", pitagoras(3, 4, 5));
    return 0;
}
