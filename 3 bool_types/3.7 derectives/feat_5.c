#include <stdio.h>

#define PI 3.1415
#define GRAD (180.0 / PI)

int main(void)
{
    double rad;
    scanf("%lf", &rad);

    double grad = rad * GRAD;
    printf("%.2f", grad);

    return 0;
}
