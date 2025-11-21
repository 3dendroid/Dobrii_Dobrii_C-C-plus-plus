#include <stdio.h>

int main(void)
{
    unsigned int flags, mask;
    scanf("%u %u", &flags, &mask);

    if (flags & mask)
        printf("yes");
    else
        printf("no");

    return 0;
}
