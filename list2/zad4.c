#include <stdio.h>

int main() {
  int x, y, z, suma=0;
  printf("podaj 3 liczby:\n");
  scanf("%d %d %d", &x, &y, &z);
  suma=x+y+z;
  printf("suma: %d",suma);
    return 0;
}