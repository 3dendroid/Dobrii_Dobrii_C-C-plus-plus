#include <stdio.h>
#include <stdarg.h>

double mean(int total, ...)
{
    va_list args;
    va_start(args, total);

    double sum = 0;
    for (int i = 0; i < total; i++)
        sum += va_arg(args, int);

    va_end(args);
    return sum / total;
}

int main(void)
{
    printf("%.2f\n", mean(7, 5, -10, 11, 0, 12, 4, 2));
    return 0;
}