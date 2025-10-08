#include <stdio.h>
#include <math.h>

int main(void)
{
    double a = 7.5, b = -3.43;
    double max_ab = (a > b) ? a + 2 : b - 5;

    double res_abs = (a < b) ? fabs(a) : fabs(b);

    /*   if (a > b)
            max_ab = a;
        else
            max_ab = b;
    */
    printf("res_abs = %.2f\n", res_abs);

    return 0;
}