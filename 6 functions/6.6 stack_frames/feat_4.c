#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double norm(int a, int b)
{
    int N = 100;
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        int x_i = a + rand() % (b - a + 1);
        sum += x_i;
    }

    return (double)sum / N;
}

double reley(double x1, double x2)
{
    return sqrt(x1 * x1 + x2 * x2);
}

int main(void)
{

    double y = reley(norm(0, 5), norm(0, 5));

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
        return 0;
}