

int przestepny(int r)
{
    return (r % 4 == 0 && r % 100 != 0) || (r % 400 == 0);
}

int dni(int m, int r)
{
    if (m == 2)
        return przestepny(r) ? 29 : 28;
    if (m==4 || m==6 || m==9 || m==11)
        return 30;
    return 31;
}

int main(void)
{
    printf("%d\n", dni(2, 2024));
    return 0;
}
