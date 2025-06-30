#include <stdio.h>

int main(void)
{
    int x;

    scanf("%d", &x);

    float km_h = x * 3.6;

    printf("%.1f\n", km_h);

    return 0;
}
