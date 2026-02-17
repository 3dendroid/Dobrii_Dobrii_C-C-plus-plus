#include <stdio.h>

int main(void)
{
    int x;

    while (scanf("%d", &x) == 1 && x != 0) {
        printf("%d", x * x);
        printf(" ");
    }

    return 0;
}
