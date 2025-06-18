#include <stdio.h>
void main()
{
    int size = 10;
    int res = (size - 1) * 5 + (++size - 1) * 2;

    printf("%d", res);
}