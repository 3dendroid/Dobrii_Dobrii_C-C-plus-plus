#include <stdio.h>

int main(void)
{
    int angle;
    scanf("%d", &angle);

    // здесь продолжайте программу
    int res = angle % 360;

    printf("%d", res);
    return 0;
}