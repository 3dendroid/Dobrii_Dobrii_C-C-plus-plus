#include <stdio.h>

int main(void)
{
    unsigned int a, b;
    scanf("%u %u", &a, &b);

    a >>= 1;
    b >>= 1;

    unsigned int res = a * b;

    printf("%u", res);

    return 0;
}
