#include <stdio.h>

int main(void) {
    int m;
    scanf("%d", &m);

    if (m == 1) printf("Styczen\n");
    else if (m == 2) printf("Luty\n");
    else if (m == 3) printf("Marzec\n");
    else if (m == 4) printf("Kwiecien\n");
    else if (m == 5) printf("Maj\n");
    else if (m == 6) printf("Czerwiec\n");
    else if (m == 7) printf("Lipiec\n");
    else if (m == 8) printf("Sierpien\n");
    else if (m == 9) printf("Wrzesien\n");
    else if (m == 10) printf("Pazdziernik\n");
    else if (m == 11) printf("Listopad\n");
    else if (m == 12) printf("Grudzien\n");
    else printf("Niepoprawny numer miesiaca\n");

    return 0;
}
