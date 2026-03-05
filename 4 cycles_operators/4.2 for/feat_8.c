#include <stdio.h>

int main(void)
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }

    printf("%d", sum);

    return 0;
}