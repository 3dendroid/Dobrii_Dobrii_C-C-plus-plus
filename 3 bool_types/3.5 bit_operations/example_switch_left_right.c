#include <stdio.h>

int main(void)
{
    unsigned char x = 40;
    printf("x before shift = %d\n", x);

    x = x >> 1;
    printf("x after right shift = %d\n", x);
    x = x >> 2;
    printf("x after right shift = %d\n", x);

    return 0;
}