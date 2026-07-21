#include <stdio.h>
#include <math.h>

double sq4_x(double x)
{
    double res = (x < 0) ? NAN : pow(x, 0.25);
    return res;
}

int main(void)
{
    printf("%f\n", sq4_x(16));
    return 0;
}