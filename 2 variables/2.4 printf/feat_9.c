#include <stdio.h>

int main(void)
{
    unsigned char h = 11, m = 8, s = 1;

    printf("%02d:%02d:%02d\n", h, m, s);
    printf("%d:0%d:0%d", h, m, s);

    return 0;
}