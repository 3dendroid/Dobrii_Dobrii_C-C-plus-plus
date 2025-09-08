#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    float a;

    scanf("%f", &a);

    printf("%d", (a >= -5.45) && (a <= 10.37));

    return 0;
}