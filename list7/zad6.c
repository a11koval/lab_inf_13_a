

int main(void)
{
    int t[20], i, x, found = 0;

    srand((unsigned int)time(NULL));

    for (i = 0; i < 20; i++)
        t[i] = rand() % 201;

    scanf("%d", &x);

    for (i = 0; i < 20; i++)
        if (t[i] == x)
            found = 1;

    printf(found ? "TAK\n" : "NIE\n");
    return 0;
}
