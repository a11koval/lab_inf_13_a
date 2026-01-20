#include <stdio.h>
#include <string.h>

struct osoba {
    char imie[30];
    char nazwisko[30];
    int rok_urodzenia;
    char plec;
};

void wczytaj(struct osoba *o)
{
    scanf("%s %s %d %c", o->imie, o->nazwisko, &o->rok_urodzenia, &o->plec);
}

void wyswietl(struct osoba o)
{
    printf("%s %s %d %c\n", o.imie, o.nazwisko, o.rok_urodzenia, o.plec);
}

// sortowanie wg imienia
void sortuj_wg_imienia(struct osoba t[], int n)
{
    struct osoba tmp;
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1;j++)
            if(strcmp(t[j].imie, t[j+1].imie) > 0)
            {
                tmp = t[j];
                t[j] = t[j+1];
                t[j+1] = tmp;
            }
}

// sortowanie wg wieku (rok urodzenia)
void sortuj_wg_wieku(struct osoba t[], int n)
{
    struct osoba tmp;
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1;j++)
            if(t[j].rok_urodzenia > t[j+1].rok_urodzenia)
            {
                tmp = t[j];
                t[j] = t[j+1];
                t[j+1] = tmp;
            }
}

// wyszukiwanie po imieniu i przedziale wieku
void szukaj(char imie[], int od, int doo, struct osoba t[], int n)
{
    int rok = 2025;
    for(int i=0;i<n;i++)
    {
        int wiek = rok - t[i].rok_urodzenia;
        if(strcmp(t[i].imie, imie) == 0 && wiek >= od && wiek <= doo)
            wyswietl(t[i]);
    }
}

int main(void)
{
    struct osoba tab[3];

    for(int i=0;i<3;i++)
        wczytaj(&tab[i]);

    sortuj_wg_imienia(tab, 3);
    sortuj_wg_wieku(tab, 3);

    szukaj("Agnieszka", 5, 30, tab, 3);

    return 0;
}
