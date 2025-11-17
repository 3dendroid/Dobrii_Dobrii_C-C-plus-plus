#include <stdio.h>

int main(void)
{
    unsigned int x;
    scanf("%u", &x);

    unsigned int res = x << 3;

    printf("%u\n", res);

    return 0;
}
