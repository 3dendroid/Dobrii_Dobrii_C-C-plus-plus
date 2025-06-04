#include <stdio.h>

int main(void)
{
    int a, b, h;

    scanf("%d, %d, %d", &a, &b, &h);

    float S = (a + b) * h / 2.0;
    printf("%.1f", S);
    return 0;
}