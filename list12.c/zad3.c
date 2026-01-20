#include <stdio.h>

#define N 5

/* Zapis tablicy do pliku */
void zapisz(int t[])
{
    FILE *plik = fopen("zad3.txt", "w");

    if (plik == NULL)
        return;

    for (int i = 0; i < N; i++)
        fprintf(plik, "%d ", t[i]);

    fclose(plik);
}

/* Odczyt tablicy z pliku */
void odczytaj(int t[])
{
    FILE *plik = fopen("zad3.txt", "r");

    if (plik == NULL)
        return;

    for (int i = 0; i < N; i++)
        fscanf(plik, "%d", &t[i]);

    fclose(plik);
}

/* Wyswietlanie tablicy */
void wyswietl(int t[])
{
    for (int i = 0; i < N; i++)
        printf("%d ", t[i]);
}

int main(void)
{
    int tab1[N] = {1, 2, 3, 4, 5};
    int tab2[N];

    zapisz(tab1);
    odczytaj(tab2);

    printf("Odczytana tablica:\n");
    wyswietl(tab2);

    return 0;
}
