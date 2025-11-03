#include <stdio.h>

int main(void)
{
    unsigned char flags = 9;
    unsigned char mask = 1;

    flags = flags ^ mask;
    flags ^= mask;

    printf("flags = %d\n", flags);

    return 0;
}