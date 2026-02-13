#include <stdio.h>

int main(void)
{
    int s = 0;
    int x;

    while (scanf("%d", &x) == 1 && x != 0)
    {
        res = x % 2;
        if (res == 0)
            s += x;
    }

    printf("res = %d\n", res);
    printf("s = %d\n", s);

    return 0;
}