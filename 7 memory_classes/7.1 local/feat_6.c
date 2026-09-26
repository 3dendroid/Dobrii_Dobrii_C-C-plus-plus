#include <stdio.h>

int is_positive(int n)
{
    return n >= 0;
}

int main(void)
{
    int x;
    int first = 1;
    while (scanf("%d", &x) == 1)
    {
        if (is_positive(x))
        {
            if (!first)
                printf(" ");
            printf("%d", x);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}