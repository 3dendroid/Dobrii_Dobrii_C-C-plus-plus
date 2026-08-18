#include <stdio.h>
#include <stdlib.h>

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

int main(void)
{

    double y = norm(-2, 10);

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
        return 0;
}