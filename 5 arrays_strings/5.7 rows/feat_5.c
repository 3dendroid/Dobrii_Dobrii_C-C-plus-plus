#include <stdio.h>

int main(void)
{
    char *text[3] = {
        "language C",
        "language C++",
        "language Python"};

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
        return 0;
}