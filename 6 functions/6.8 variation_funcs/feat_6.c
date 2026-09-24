#include <stdio.h>
#include <stdarg.h>

void ar_fill(double *ar, size_t count, ...)
{
    va_list args;
    va_start(args, count);

    for (size_t i = 0; i < count; i++)
        ar[i] = va_arg(args, double);

    va_end(args);
}

int main(void)
{
    double weights[5];
    ar_fill(weights, 5, 0.1, 0.2, 0.3, 0.4, 0.5);

    return 0;
}