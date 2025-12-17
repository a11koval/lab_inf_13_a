#include <stdio.h>
    
int przestepny(int r)
{
    return (r % 4 == 0 && r % 100 != 0) || (r % 400 == 0);
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
    printf("%d\n", dzien_roku(31, 12, 2024));
    return 0;
}
