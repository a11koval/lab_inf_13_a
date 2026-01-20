#include <stdio.h>

int main() {
    int N1, N2;
    int suma = 0;

    printf("Podaj N1: ");
    scanf("%d", &N1);

    printf("Podaj N2: ");
    scanf("%d", &N2);

    for (int i = N1; i <= N2; i++) {
        suma = suma + i;
    }

    printf("Suma liczb od %d do %d wynosi: %d\n", N1, N2, suma);

    return 0;
}
