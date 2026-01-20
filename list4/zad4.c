#include <stdio.h>

int main(void) {
    int n, i;
    float ocena, suma = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%f", &ocena);
        suma += ocena;
    }

    printf("Srednia = %.2f\n", suma / n);
    return 0;
}
