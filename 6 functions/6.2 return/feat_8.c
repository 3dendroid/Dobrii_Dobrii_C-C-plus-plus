#include <stdio.h>
#include <math.h>

double get_length(int x, int y)
{
    return sqrt((double)x * x + (double)y * y);
}

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%.2f\n", get_length(x, y));

    return 0;
}