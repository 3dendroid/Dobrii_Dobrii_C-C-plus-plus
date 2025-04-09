#include <stdio.h>

int main(void)
{
    double d;
    int res = sizeof(d);
    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}