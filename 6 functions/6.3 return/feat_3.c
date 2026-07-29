#include <stdio.h>
#include <math.h>

double get_geom(int a, int b);

int main(void)
{
    int a, b;
    scanf("%d, %d", &a, &b);

    printf("%.2f\n", get_geom(a, b));

    return 0;
}

double get_geom(int a, int b)
{
    return sqrt((double)a * b);
}