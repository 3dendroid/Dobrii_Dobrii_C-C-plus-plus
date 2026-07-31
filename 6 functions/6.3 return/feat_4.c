#include <stdio.h>

int calc_rect(int w, int h, int type);

int main(void)
{
    int a, b, t;
    scanf("%d, %d, %d", &a, &b, &t);

    printf("%d\n", calc_rect(a, b, t));

    return 0;
}

int calc_rect(int w, int h, int type)
{
    if (type == 1)
        return w * h;
    else
        return 2 * (w + h);
}