#include <stdio.h>

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);


    unsigned char mask = (1 << 4) | (1 << 2) | (1 << 0);

    unsigned char res = bits | mask;

    printf("%d\n", res);

    return 0;
}
