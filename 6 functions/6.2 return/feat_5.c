#include <stdio.h>

int get_sum2(int a, int b)
{
    return a + b;
}

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", get_sum2(get_sum2(a, b), c));

    return 0;
}