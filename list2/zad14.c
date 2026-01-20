#include <stdio.h>

int main() {
    int x;
    printf("podaj liczbe:");
    scanf("%d", &x);
    if(x % 2 ==0)
    printf("liczba parzysta");
    else
    printf("nie parzysta");

    return 0;
}