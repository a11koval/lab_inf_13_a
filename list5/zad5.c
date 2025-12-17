#include <stdio.h>
    

int pierwsza(int n)
{
    int i;
    if (n < 2) return 0;
    for (i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main(void)
{
    int N, i;
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
        if (pierwsza(i))
            printf("%d ", i);

    return 0;
}
