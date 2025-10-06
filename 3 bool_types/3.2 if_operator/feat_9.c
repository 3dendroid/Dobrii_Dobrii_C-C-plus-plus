#include <stdio.h>

int main(void)
{
    float a, b, c;
    scanf("%f, %f, %f", &a, &b, &c);

    float min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;

    printf("%.2f", min);
    return 0;
}
