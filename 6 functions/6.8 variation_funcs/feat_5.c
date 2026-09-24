#include <stdio.h>
#include <stdarg.h>

double sumf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    double sum = 0;
    for (int i = 0; format[i] != '\0'; i++)
    {
        double x = va_arg(args, double);
        if (format[i] == '+')
            sum += x;
    }

    va_end(args);
    return sum;
}

int main(void)
{
    double res = sumf("++ + +", 1.0, 2.0, 3.0, 4.0, 5.0, 6.0);
    printf("%.2f ", res);

    return 0;
}