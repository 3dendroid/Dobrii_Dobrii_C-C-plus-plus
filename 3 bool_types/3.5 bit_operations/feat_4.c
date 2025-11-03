#include <stdio.h>

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);

    if ((bits & (1 << 3)) && (bits & (1 << 5)))
        printf("%d\n", bits);
    else
        printf("-1\n");

    return 0;
}
