#include <stdio.h>


int przestepny(int r)
{
    return (r % 4 == 0 && r % 100 != 0) || (r % 400 == 0);
}

int dni_w_roku(int r)
{
    return przestepny(r) ? 366 : 365;
}

int dzien_roku(int d, int m, int r)
{
    int dni[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int i, suma = d;

    if (przestepny(r)) dni[1] = 29;

    for (i = 0; i < m - 1; i++)
        suma += dni[i];

    return suma;
}

int main(void)
{
    int d1 = dzien_roku(1, 1, 2024);
    int d2 = dzien_roku(31, 12, 2024);

    printf("%d\n", d2 - d1);
    return 0;
}
