
int main(void)
{
    int N, i, suma = 0;
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
        if (i % 7 == 0)
            suma += i;

    printf("%d\n", suma);
    return 0;
}
