#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b + c || b >= a + c || c >= a + b)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }

    return 0;
}
