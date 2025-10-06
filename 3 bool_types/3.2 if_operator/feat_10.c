#include <stdio.h>

int main(void)
{
    float a, b, c;
    scanf("%f, %f, %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
        printf("yes");
    else
        printf("no");

    return 0;
}
