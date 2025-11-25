#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
    double a, b, c;
    double D, x1, x2;

    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("Error reading input\n");
        return 1;
    }

    D = b * b - 4 * a * c;
    if (D < 0)
    {
        printf("No real roots\n");
        return 0;
    }

    D = sqrt(D);

    x1 = -(b + D) / (2 * a);
    x2 = -(b - D) / (2 * a);

    printf("Roots: %.2f, %.2f\n", x1, x2);

    return 0;
}
