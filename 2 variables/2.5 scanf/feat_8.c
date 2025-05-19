#include <stdio.h>

int main(void)
{
    int a;
    float b, c;

    scanf("%d\n%f\n%f\n", &a, &b, &c);
    printf("%d %.2f %.2f\n", a, b, c);

    return 0;
}