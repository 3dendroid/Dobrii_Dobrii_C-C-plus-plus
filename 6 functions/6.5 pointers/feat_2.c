#include <stdio.h>

double max_2(double a, double b)
{
    return (a > b) ? a : b;
}

int main(void)
{
    double a, b;
    scanf("%lf, %lf", &a, &b);

    double (*ptr_max_2)(double, double) = max_2;

    double res = ptr_max_2(a, b);

    printf("%.1f\n", res);

    __ASSERT_TESTS__
    return 0;
}