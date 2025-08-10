#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a;

    scanf("%d", &a);

    printf("%d", 100 * (a % 5 == 0));

    return 0;
}