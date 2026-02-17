#include <stdio.h>

int main(void)
{
    int n, k = 1;
    double s = 0.0;

    scanf("%d", &n);

    while (k <= n) {
        s += 1.0 / (k * k);
        k++;
    }

    printf("%.3f", s);

    return 0;
}
