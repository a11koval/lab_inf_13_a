

int main(void) {
    float x;
    scanf("%f", &x);

    if (x > 0)
        printf("Liczba dodatnia\n");
    else if (x < 0)
        printf("Liczba ujemna\n");
    else
        printf("Zero\n");

    return 0;
}
