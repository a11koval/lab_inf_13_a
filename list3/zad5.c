

int main(void) {
    float ocena, suma = 0;
    int licznik = 0;

    while (1) {
        scanf("%f", &ocena);
        if (ocena == 0)
            break;
        suma += ocena;
        licznik++;
    }

    if (licznik > 0)
        printf("Srednia = %.2f\n", suma / licznik);
    else
        printf("Brak ocen\n");

    return 0;
}
