#include <stdio.h>

int main(void)
{
__int8 a=0b10011101; // если внимательно перечитать условие, становится понятно почему просто int даёт неверный результат.
    printf("RESULT: %i",a);
    return 0;
}