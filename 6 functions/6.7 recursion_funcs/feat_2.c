#include <stdio.h>
#define MAX_RECURSION 4

void recursive(int n)
{
    if (n > MAX_RECURSION)
        return;
    recursive(n + 1);
    if (n < MAX_RECURSION)
        printf(" ");
    printf("%d", n);
}

int main(void)
{
    recursive(1);
    printf("\n");
    return 0;
}