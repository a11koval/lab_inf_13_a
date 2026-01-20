#include <stdio.h>  


int max_tab(int t[], int n)
{
    int i, max = t[0];
    for (i = 1; i < n; i++)
        if (t[i] > max)
            max = t[i];
    return max;
}

int main(void)
{
    int t[5] = {3, 8, 1, 6, 4};
    printf("%d\n", max_tab(t, 5));
    return 0;
}
