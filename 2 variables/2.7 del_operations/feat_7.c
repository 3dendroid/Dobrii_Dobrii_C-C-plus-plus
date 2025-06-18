#include <stdio.h>
void main()
{
    int size = 10, w = 8;
    int res = size++ * w + 20;

    printf("%d", res);
}