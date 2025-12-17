#include <stdio.h>  

int main(void)
{
    int N, i, suma = 0;
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
        if (i % 10 == 1 || i % 10 == 2 || i % 10 == 3)
            suma += i;

    printf("%d\n", suma);
    return 0;
}
