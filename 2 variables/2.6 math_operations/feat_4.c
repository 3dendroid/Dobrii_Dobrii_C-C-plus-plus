#include <stdio.h>

int main(void)
{
    int h, w;
    scanf("%d %d", &h, &w);

    // здесь продолжайте программу
    float res = (float)h / w;

    printf("%.2f", res);
    return 0;
}