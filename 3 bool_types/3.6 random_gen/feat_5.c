#include <stdio.h>
#include <stdlib.h>
#define RAND_MAX 32767

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = 0; i < 10; i++) {
        int rnd = rand();
        double y = (double)rnd / RAND_MAX * (b - a) + a;
        printf("%.2f ", y);
    }

    return 0;
}
