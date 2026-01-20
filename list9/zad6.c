#include <stdio.h>
#include <string.h>

void dopisz(char w[]) {
    char t[50];
    while(1) {
        fgets(t,50,stdin);
        if(strcmp(t,"\n")==0) break;
        strcat(w,t);
    }
}

int main(void) {
    char w[300]="";
    dopisz(w);
    printf("%s\n",w);
    return 0;
}
