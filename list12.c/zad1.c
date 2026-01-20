#include <stdio.h>

/* Funkcja zapisuje znaki do pliku */
void zapisz(void)
{
    FILE *plik;
    char znak;

    plik = fopen("zad1.txt", "w"); // otwarcie pliku do zapisu

    if (plik == NULL)
    {
        printf("Blad otwarcia pliku!\n");
        return;
    }

    printf("Podawaj znaki (koniec = kropka):\n");

    do
    {
        znak = getchar();
        fputc(znak, plik);   // zapis znaku do pliku
    }
    while (znak != '.');

    fclose(plik); // zamknięcie pliku
}

/* Funkcja odczytuje i wyswietla plik */
void odczytaj(void)
{
    FILE *plik;
    char znak;

    plik = fopen("zad1.txt", "r"); // otwarcie do odczytu

    if (plik == NULL)
    {
        printf("Blad otwarcia pliku!\n");
        return;
    }

    printf("\nZawartosc pliku:\n");

    while ((znak = fgetc(plik)) != EOF)
    {
        putchar(znak); // wypisanie znaku
    }

    fclose(plik);
}

int main(void)
{
    zapisz();
    odczytaj();
    return 0;
}
