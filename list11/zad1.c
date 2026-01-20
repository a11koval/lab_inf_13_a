#include <stdio.h>


struct osoba {
    char imie[30];
    char nazwisko[30];
    int rok_urodzenia;
};

void wczytaj(struct osoba *o)
{
    printf("Podaj imie: ");
    scanf("%s", o->imie);

    printf("Podaj nazwisko: ");
    scanf("%s", o->nazwisko);

    printf("Podaj rok urodzenia: ");
    scanf("%d", &o->rok_urodzenia);
}

void wyswietl(struct osoba o)
{
    printf("Imie: %s\n", o.imie);
    printf("Nazwisko: %s\n", o.nazwisko);
    printf("Rok urodzenia: %d\n", o.rok_urodzenia);
}

int main(void)
{
    struct osoba o1;

    wczytaj(&o1);
    wyswietl(o1);

    return 0;
}
