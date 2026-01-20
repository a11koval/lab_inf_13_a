#include <stdio.h>

int main(void) {
    int zdobyte_punkty, maks_punkty;
    scanf("%d %d", &zdobyte_punkty, &maks_punkty);

    float procent = (float)zdobyte_punkty / maks_punkty * 100;

    printf("Procent: %.2f%%\n", procent);

    if (procent >= 92) printf("Ocena: 5.0 (db+)\n");
    else if (procent >= 85) printf("Ocena: 4.5 (db)\n");
    else if (procent >= 76) printf("Ocena: 4.0 (db-)\n");
    else if (procent >= 68) printf("Ocena: 3.5 (dst+)\n");
    else if (procent >= 60) printf("Ocena: 3.0 (dst)\n");
    else printf("Ocena: 2.0 (ndst)\n");

    return 0;
}
