#include <stdio.h>

int main() {
    int a;
    float x;
    char s;
    printf("podaj z klawiatury:");
    scanf("%d %f %c", &a, &x, &s);
    printf("odpowiedzi int: %d, float: %.2f, char: %c, char jako liczba: %d", a, x, s, s);

    return 0;
}