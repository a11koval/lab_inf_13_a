#include <stdio.h>

/* 
Funkcja usuwa wszystkie spacje z tekstu
*/
void zad7(void)
{
    char tekst[500];   // tablica na tekst wpisany przez użytkownika
    char wynik[500];   // tablica na tekst bez spacji
    int j = 0;         // indeks dla tablicy wynik

    printf("Podaj tekst: ");
    fgets(tekst, 500, stdin);   // wczytanie całej linii (ze spacjami)

    // pętla przechodzi po każdym znaku tekstu
    for(int i = 0; tekst[i] != '\0'; i++)
    {
        // jeżeli znak NIE jest spacją
        if(tekst[i] != ' ')
        {
            wynik[j] = tekst[i];  // przepisujemy znak
            j++;                  // przechodzimy do następnej pozycji
        }
    }

    wynik[j] = '\0';   // zakończenie łańcucha znaków

    printf("Tekst bez spacji: %s\n", wynik);
}

int main(void)
{
    zad7();   // wywołanie funkcji
    return 0;
}
