#include <stdio.h>

int main(void)
{
    int x, sum = 0;

    do {
        scanf("%d", &x);
        if (x > 0)
            sum += x;
    } while (x != 13);

    printf("%d", sum);

    return 0;
}




