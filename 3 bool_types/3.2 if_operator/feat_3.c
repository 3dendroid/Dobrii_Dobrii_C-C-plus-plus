#include <stdio.h>

int main(void)
{
    int m, n;
    if (scanf("%d, %d", &m, &n) != 2)
    {
        printf("Input error.");
    }
    else if (m % n == 0)
    {
        printf("%d\n", m / n);
    }
    else
    {
        printf("division error\n");
    }

    return 0;
}