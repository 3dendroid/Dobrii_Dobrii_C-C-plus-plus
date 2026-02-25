#include <stdio.h>

int main(void)
{
    int n, s; // sum of squares

    scanf("%d", &n);

    for (s = 0; n > 0; --n)
        s += n * n;

    printf("s = %d\n", s);

    return 0;
}