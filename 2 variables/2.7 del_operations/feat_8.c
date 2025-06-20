#include <stdio.h>

int main(void)
{
    float x;
    // читаем вещественное число
    if (scanf("%f", &x) != 1)
        return 0;
    // в printf сразу уменьшаем x на 1 и выводим с точностью до десятых
    printf("%.1f\n", x -= 1);
    return 0;
}
