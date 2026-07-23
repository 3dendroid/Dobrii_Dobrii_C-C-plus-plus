#include <stdio.h>

double get_mean2(int a, int b)
{
    return (a + b) / 2.0;
}

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%.1f\n", get_mean2(a, b));

    return 0;
}