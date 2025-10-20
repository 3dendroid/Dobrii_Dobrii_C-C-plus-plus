#include <stdio.h>

int main(void)
{
    int a, b, h;
    float s;

    scanf("%d, %d, %d", &a, &b, &h);

    s = (a + b) * h / 2.0;

    printf("%.1f\n", s);

    return 0;
}
