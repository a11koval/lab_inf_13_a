#include <stdio.h>

int main(void) {
    int a;
    float b;
    char c;

    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %c", &c);

    printf("int: %d\n", a);
    printf("float: %f\n", b);
    printf("char jako znak: %c\n", c);
    printf("char jako liczba (ASCII): %d\n", c);

    return 0;
}
