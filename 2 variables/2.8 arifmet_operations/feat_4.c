#include <stdio.h>
int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    int c = (a * 3) * (b - 10);

    printf("%d", c);
    
    return 0;
}