#include <stdio.h>

int main(void)
{
    int ar[10];
    int n = 0;

    while (n < 10 && scanf("%d", &ar[n]) == 1)
        n++;

    int result = 1;
    for (int i = 0; i < n; i++)
        result &= (ar[i] >= 0) & (ar[i] & 1);

    printf("%d\n", result);

    return 0;
}