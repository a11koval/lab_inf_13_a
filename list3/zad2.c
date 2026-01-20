#include <stdio.h>

int main(void) {
    float c;
    scanf("%f", &c);

    float f = (c * 9/5) + 32;
    float k = c + 273.15;

    printf("Fahrenheit: %.2f\n", f);
    printf("Kelvin: %.2f\n", k);

    return 0;
}
