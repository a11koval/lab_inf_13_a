

int przestepny(int r)
{
    return (r % 4 == 0 && r % 100 != 0) || (r % 400 == 0);
}

int poprawna_data(int d, int m, int r)
{
    int dni_m;

    if (r < 1582) return 0;
    if (m < 1 || m > 12) return 0;

    if (m == 2)
        dni_m = przestepny(r) ? 29 : 28;
    else if (m==4 || m==6 || m==9 || m==11)
        dni_m = 30;
    else
        dni_m = 31;

    if (d < 1 || d > dni_m) return 0;
    return 1;
}

int main(void)
{
    printf("%d\n", poprawna_data(29, 2, 2024));
    return 0;
}
