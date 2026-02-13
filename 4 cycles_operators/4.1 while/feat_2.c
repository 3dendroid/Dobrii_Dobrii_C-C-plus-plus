#include <stdio.h>

int main(void)
{
    int count = 0;
    int s = 0;

    while (count++ <= 5)
        s += count;

    printf("s = %d\n", s);

    return 0;
}
