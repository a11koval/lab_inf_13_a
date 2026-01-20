#include <stdio.h>

int main(void)
{
    double a, b;
    char op;

    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+': printf("%lf\n", a + b); break;
        case '-': printf("%lf\n", a - b); break;
        case '*': printf("%lf\n", a * b); break;
        case '/':
            if (b != 0)
                printf("%lf\n", a / b);
            else
                printf("Dzielenie przez zero\n");
            break;
        default:
            printf("Bledny operator\n");
    }
    return 0;
}
