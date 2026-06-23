#include <stdio.h>

int main(void)
{
    char str[50] = "best string!";
    int shift = 4; // Длина строки "The "

    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    for (int i = len; i >= 0; i--)
    {
        str[i + shift] = str[i];
    }

    str[0] = 'T';
    str[1] = 'h';
    str[2] = 'e';
    str[3] = ' ';

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
        return 0;
}