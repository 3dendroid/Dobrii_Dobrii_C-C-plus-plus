#include <stdio.h>

int main(void) {
    int a, b, temp;

    // читаем два целых числа из одной строки
    scanf("%d %d", &a, &b);

    // меняем их местами, используя вспомогательную переменную
    temp = a;
    a = b;
    b = temp;

    // выводим результат
    printf("%d %d\n", a, b);

    return 0;
}
