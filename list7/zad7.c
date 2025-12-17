#include <stdio.h>


int main(void)
{
    int t[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;

    for (i = 0; i < 8; i++)
        printf("(%d,%d,%d)\n", t[i], t[i+1], t[i+2]);

    return 0;
}
