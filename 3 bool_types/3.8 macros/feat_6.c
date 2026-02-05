#include <stdio.h>

// Макрос для создания имени переменной вида mul_NAME1_NAME2
#define MUL_VAR_NAME(NAME1, NAME2) mul_ ## NAME1 ## _ ## NAME2

int main(void)
{
    int a, b;
    // Читаем два числа из входного потока
    if (scanf("%d %d", &a, &b) != 2) return 0;

    // С помощью макроса объявляем переменную mul_a_b
    // Она будет создана как: int mul_a_b = a * b;
    int MUL_VAR_NAME(a, b) = a * b;

    // Выводим значение созданной переменной
    printf("%d", MUL_VAR_NAME(a, b));

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}