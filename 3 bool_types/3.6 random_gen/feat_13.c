#include <stdio.h>
#include <math.h>

int main() {
    double a, b;

    scanf("%lf, %lf", &a, &b);

    double tan_val = a / b;
    double angle = atan(tan_val);

    printf("%.2f %.2f\n", tan_val, angle);

    return 0;
}
