#include <stdio.h>

int is_range(double x, double a, double b)
{
    return x > a && x < b;
}

int main(void)
{
    double x;
    int first = 1;
    while (scanf("%lf", &x) == 1)
    {
        if (!is_range(x, -2.5, 3.5))
        {
            if (!first)
                printf(" ");
            printf("%.1f", x);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}