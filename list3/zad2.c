#include <stdio.h>

int main(void) {
    int i;

    // parzyste od 2 do 60
    for (i = 2; i <= 60; i += 2)
        printf("%d ", i);
    printf("\n");

    // podzielne przez 7 z zakresu 1–80 (if + %)
    for (i = 1; i <= 80; i++)
        if (i % 7 == 0)
            printf("%d ", i);
    printf("\n");

    // podzielne przez 5 z zakresu 10–120 (krok 5)
    for (i = 10; i <= 120; i += 5)
        printf("%d ", i);

    return 0;
}
