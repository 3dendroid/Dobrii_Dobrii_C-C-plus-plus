#include <stdio.h>

int is_triangle(int a, int b, int c)
{
    if (a < b + c && b < a + c && c < a + b)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    int a, b, c;

    if (scanf("%d %d %d", &a, &b, &c) == 3)
    {

        int result = is_triangle(a, b, c);

        printf("%d", result);
    }

    return 0;
}