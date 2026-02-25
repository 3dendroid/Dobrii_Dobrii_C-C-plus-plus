#include <stdio.h>

int main(void)
{
    int n = 5, p = 1; // factorial of 5

    for (int i = 1; i <= n; ++i)
        p = p * i;

    printf("p = %d\n", p);

    return 0;
}