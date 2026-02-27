#include <stdio.h>

int main(void)
{
    int a1, d, n;
    scanf("%d; %d; %d", &a1, &d, &n);

    for (int i = 0; i < n; i++)
{
    printf("%d", a1 + i * d);
    if (i < n - 1)
        printf(" ");
}

    return 0;
}