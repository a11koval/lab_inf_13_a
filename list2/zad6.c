#include <stdio.h>

int main(void) {
    float a, b;
    char op;
    scanf("%f %c %f", &a, &op, &b);

    if (op == '+') printf("%.2f\n", a + b);
    else if (op == '-') printf("%.2f\n", a - b);
    else if (op == '*') printf("%.2f\n", a * b);
    else if (op == '/') {
        if (b != 0) printf("%.2f\n", a / b);
        else printf("Blad: dzielenie przez zero\n");
    }
    else printf("Niepoprawny operator\n");

    return 0;
}
