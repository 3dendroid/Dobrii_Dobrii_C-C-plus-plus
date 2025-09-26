#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    if (a % 10 == 3)
        printf("yes");
    else if (a % 10 != 3)
        printf("no");

    return 0;
}
