#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>

double v_norm2(char *type, ...)
{
    int n = 0;
    if (strcmp(type, "vector2") == 0)
        n = 2;
    else if (strcmp(type, "vector3") == 0)
        n = 3;
    else if (strcmp(type, "vector4") == 0)
        n = 4;
    else
        return 0.0;

    va_list args;
    va_start(args, type);

    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        double x = va_arg(args, double);
        sum += x * x;
    }

    va_end(args);
    return sqrt(sum);
}

int main(void)
{
    printf("%.1f\n", v_norm2("vector2", 1.0, 2.0));
    return 0;
}