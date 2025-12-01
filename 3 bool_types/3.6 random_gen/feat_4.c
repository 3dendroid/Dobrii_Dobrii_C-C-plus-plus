#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = 0; i < 10; i++) {
        int rnd = rand();
        int y = rnd % (b - a + 1) + a;
        printf("%d ", y);
    }

    return 0;
}
