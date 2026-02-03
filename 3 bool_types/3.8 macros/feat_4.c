#include <stdio.h>
#include <math.h>

// здесь объявляйте макро-функцию
#define GIPOT(x, y) (sqrt((x)*(x) + (y)*(y)))

int main(void)
{
    int a, b;
    if(scanf("%d, %d", &a, &b) != 2) {
        printf("Input error");
        return 0;
    }

    double length = GIPOT(a + 3, b - 2);

    printf("%.2f", length);

    __ASSERT_TESTS__
    return 0;
}
