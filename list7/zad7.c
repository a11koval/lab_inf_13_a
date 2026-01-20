#include <stdio.h>


int suma_kwadratow(int K)
{
    int i, suma = 0;

    for (i = -K; i <= K; i++)
        if (i % 2 == 0)
            suma += i * i;

    return suma;
}

int main(void)
{
    printf("%d\n", suma_kwadratow(5));
    return 0;
}
