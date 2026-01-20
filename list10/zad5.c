#include <stdio.h>
#include <string.h>
#include <ctype.h>

void zawiera(char s1[], char s2[]) {
    if(strstr(s2,s1)) printf("TAK\n");
    else printf("NIE\n");
}

void porownaj(char s1[], char s2[]) {
    for(int i=0;s1[i];i++) s1[i]=toupper(s1[i]);
    for(int i=0;s2[i];i++) s2[i]=toupper(s2[i]);
    if(strcmp(s1,s2)==0) printf("ROWNE\n");
}

void odwroc(char s[]) {
    int n=strlen(s)-1;
    for(int i=0;i<n/2;i++) {
        char t=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=t;
    }
    printf("%s\n",s);
}

int main(void) {
    char s1[100], s2[100];
    fgets(s1,100,stdin);
    fgets(s2,100,stdin);
    zawiera(s1,s2);
    porownaj(s1,s2);
    odwroc(s1);
    return 0;
}
