#include <stdio.h>

int main(void)
{
    int a, b;
    float d;

    // здесь продолжайте программу
    scanf("%d, %d, %*f, %f", &a, &b, &d);

    // выводим: два целых и один float с точностью до сотых
    printf("%d %d %.2f", a, b, d);

    return 0;
}