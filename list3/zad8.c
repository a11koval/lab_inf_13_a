

int main(void) {
    int a, b, i;
    scanf("%d %d", &a, &b);

    for (i = b; i >= a; i--)
        if (i % 2 == 0)
            printf("%d ", i);

    return 0;
}
