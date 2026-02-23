#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int start = n;
    if (start % 3 != 0)
    {
        start += 3 - start % 3;
    }

    for (int i = start; i <= m; i += 3)
    {
        printf("%d", i);
        if (i + 3 <= m)
            printf(" ");
    }

    return 0;
}