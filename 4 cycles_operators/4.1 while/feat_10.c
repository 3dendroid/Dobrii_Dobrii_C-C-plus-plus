
#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    int big, small;

    if (a > b) {
        big = a;
        small = b;
    } else {
        big = b;
        small = a;
    }

    while (small > 0)
    {
        int r = big % small;
        big = small;
        small = r;
    }

    printf("%d", big);

    return 0;
}



