#include <stdio.h>

int main(void)
{
    float R = 0;

    scanf("%f", &R);

    // здесь продолжайте программу
    double res = (2 * 3.1415 * R);
    printf("%.3f", res);
    return 0;
}