#include <stdio.h>

int main(void)
{
    long int a, b, c, d;
    scanf("%ld %ld %ld", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d >= 0)
        printf("real roots exist");
    else
        printf("%ld", d);

    return 0;
}
