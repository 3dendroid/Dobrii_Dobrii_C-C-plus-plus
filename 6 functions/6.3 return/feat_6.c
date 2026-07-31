#include <stdio.h>
#define PI 3.1415

double circle_len(double r);

int main(void)
{
    double r;
    scanf("%lf", &r);

    printf("%.2f\n", circle_len(r));

    return 0;
}

double circle_len(double r)
{
    return 2.0 * PI * r;
}