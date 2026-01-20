#include <stdio.h>

/* Zapis ciagu znakow do pliku */
void zapisz(void)
{
    FILE *plik;
    char tekst[200];

    plik = fopen("zad2.txt", "w");

    if (plik == NULL)
    {
        printf("Blad pliku!\n");
        return;
    }

    printf("Podaj tekst: ");
    fgets(tekst, 200, stdin);

    fputs(tekst, plik); // zapis całego tekstu

    fclose(plik);
}

/* Odczyt ciagu znakow z pliku */
void odczytaj(void)
{
    FILE *plik;
    char tekst[200];

    plik = fopen("zad2.txt", "r");

    if (plik == NULL)
    {
        printf("Blad pliku!\n");
        return;
    }

    fgets(tekst, 200, plik); // odczyt tekstu

    printf("Zawartosc pliku:\n%s", tekst);

    fclose(plik);
}

int main(void)
{
    zapisz();
    odczytaj();
    return 0;
}
