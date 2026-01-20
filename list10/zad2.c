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

void srednia(float tab[N][M], int n, int m) {
    float s=0;
    int ile=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(tab[i][j]>0) {
                s+=tab[i][j];
                ile++;
            }
    if(ile) printf("Srednia: %.2f\n",s/ile);
}

int main(void) {
    int n,m;
    float tab[N][M];
    srand(time(NULL));
    scanf("%d %d",&n,&m);
    losuj(tab,n,m);
    srednia(tab,n,m);
    return 0;
}
