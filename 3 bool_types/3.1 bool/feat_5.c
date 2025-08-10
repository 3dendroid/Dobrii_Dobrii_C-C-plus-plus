#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    float a;

    scanf("%f", &a);

    printf("%d", ((int)a % 5 == 0));

    return 0;
}