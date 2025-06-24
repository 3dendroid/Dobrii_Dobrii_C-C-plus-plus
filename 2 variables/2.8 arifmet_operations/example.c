#include <stdio.h>
int main(void)
{
    int count = 1;

    count = count + 3;
    count += 3;

    printf("%d", count);

    return 0;
}