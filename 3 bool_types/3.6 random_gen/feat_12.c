#include <stdio.h>
#include <math.h>

int main() {
    double grad;
    const double pi = 3.1415;

    scanf("%lf", &grad);

    double rad = grad * pi / 180.0;
    double result = sin(rad);

    printf("%.1f\n", result);

    return 0;
}
