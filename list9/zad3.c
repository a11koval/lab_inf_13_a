#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100
#define M 100

void losuj(float tab[N][M], int n, int m) {
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            tab[i][j]=(float)(rand()%200-100)/10;
}

void minmax(float tab[N][M], int n, int m) {
    float min=tab[0][0], max=tab[0][0];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) {
            if(tab[i][j]<min) min=tab[i][j];
            if(tab[i][j]>max) max=tab[i][j];
        }
    printf("Min: %.1f\nMax: %.1f\n",min,max);
}

int main(void) {
    int n,m;
    float tab[N][M];
    srand(time(NULL));
    scanf("%d %d",&n,&m);
    losuj(tab,n,m);
    minmax(tab,n,m);
    return 0;
}
