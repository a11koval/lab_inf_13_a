#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int t[50], i;
    int suma = 0, parz = 0, ile20 = 0;

    srand((unsigned int)time(NULL));

    for (i = 0; i < 50; i++) {
        t[i] = rand() % 36;
        suma += t[i];
        if (t[i] > 20) ile20++;
        if (t[i] % 2 == 0) parz += t[i];
    }

    printf("ile >20: %d\n", ile20);
    printf("suma: %d\n", suma);
    printf("srednia: %lf\n", suma / 50.0);
    printf("srednia parzystych: %lf\n", parz / 25.0);

    return 0;
}
