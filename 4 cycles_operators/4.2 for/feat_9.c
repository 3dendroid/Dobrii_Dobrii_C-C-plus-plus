#include <stdio.h>

int main(void)
{
    int x;
    int num = 0;

    while (1)
    {
        scanf("%d", &x);

        if (x == 0)
            break;

        num = num * 10 + x;
    }

    printf("%d", num);

    return 0;
}