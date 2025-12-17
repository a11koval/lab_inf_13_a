
void zamien(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int x = 5, y = 10;
    zamien(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}
