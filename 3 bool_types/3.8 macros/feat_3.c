#include <stdio.h>

// здесь объявляйте макро-функцию

int main(void)
{
    double val_1, val_2;
    if(scanf("%lf; %lf", &val_1, &val_2) != 2) {
        printf("Input error");
        return 0;
    }

    // здесь продолжайте программу

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}