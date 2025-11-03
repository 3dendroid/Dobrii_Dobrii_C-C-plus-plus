#include <stdio.h>

int main(void)
{
    unsigned char flags = 13;
    unsigned char mask = 5;

    flags = flags & ~mask;
    
    printf("flags = %d\n", flags);

    return 0;
}