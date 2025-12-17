

int min_index(int t[], int n)
{
    int i, min = 0;
    for (i = 1; i < n; i++)
        if (t[i] < t[min])
            min = i;
    return min;
}

int main(void)
{
    int t[5] = {7, 2, 9, 1, 4};
    printf("%d\n", min_index(t, 5));
    return 0;
}
