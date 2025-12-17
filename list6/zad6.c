

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
    int i, N = 100;

    for (i = 3; i <= N - 2; i++)
        if (pierwsza(i) && pierwsza(i + 2))
            printf("(%d,%d)\n", i, i + 2);

    return 0;
}
