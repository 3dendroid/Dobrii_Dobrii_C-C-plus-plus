#include <stdio.h>

int main(void)
{
    int a = 0;

    scanf("%d", &a);

    // здесь продолжайте программу
    float res = (1.732 * a) / 6;
    printf("%.3f", res);
    return 0;
}