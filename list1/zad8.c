#include <stdio.h>
int main(void) {
    float m;
    scanf("%f", &m);

    printf("cm: %.2f\n", m * 100);
    printf("cale: %.2f\n", m * 39.37);
    printf("jardy: %.2f\n", m * 1.0936);
    printf("mile ladowe: %.6f\n", m / 1609.34);
    printf("mile morskie: %.6f\n", m / 1852);

    return 0;
}
