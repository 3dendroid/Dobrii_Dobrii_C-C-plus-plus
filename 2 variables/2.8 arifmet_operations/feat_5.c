#include <stdio.h>

int main(void)
{
    float a, b;
    scanf("%f %f", &a, &b);

    float c = 2 * (a + b);
    printf("Периметр: %.1f", c);

    return 0;
}
