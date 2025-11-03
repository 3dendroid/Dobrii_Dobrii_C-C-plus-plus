#include <stdio.h>

int main(void)
{
    unsigned char var = 153;
    unsigned char not_v = ~var;

    printf("var = %d, not_v = %d\n", var, not_v);

    return 0;
}