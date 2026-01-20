#include <stdio.h>

struct osoba {
    char imie[30];
    char nazwisko[30];
    int rok_urodzenia;
};

void wczytaj(struct osoba *o)
{
    scanf("%s %s %d", o->imie, o->nazwisko, &o->rok_urodzenia);
}

void wyswietl(struct osoba o)
{
    printf("%s %s %d\n", o.imie, o.nazwisko, o.rok_urodzenia);
}

int main(void)
{
    struct osoba tab[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Podaj imie nazwisko rok: ");
        wczytaj(&tab[i]);
    }

    printf("\nDane:\n");
    for(int i = 0; i < 5; i++)
        wyswietl(tab[i]);

    return 0;
}
