#include <stdio.h>

#define N 100
#define M 100

void wczytaj(int tab[N][M], int n, int m) {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &tab[i][j]);
}

void wypisz(int tab[N][M], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            printf("%4d", tab[i][j]);
        printf("\n");
    }
}

void obliczSume(int tab[N][M], int n, int m) {
    int suma = 0, sumaParz = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) {
            suma += tab[i][j];
            if(tab[i][j] % 2 == 0)
                sumaParz += tab[i][j];
        }

    printf("Suma wszystkich: %d\n", suma);
    printf("Suma parzystych: %d\n", sumaParz);
}

int main(void) {
    int n, m;
    int tab[N][M];

    printf("Podaj N i M: ");
    scanf("%d %d", &n, &m);

    wczytaj(tab, n, m);
    wypisz(tab, n, m);
    obliczSume(tab, n, m);

    return 0;
}

