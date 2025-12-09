#include <stdio.h>

int main(void)
{
    unsigned short N;
    scanf("%hu", &N);

    unsigned short total = N * 7;
    unsigned short packs = (total + 99) / 100;

    printf("%hu", packs);

    return 0;
}
