#include <stdio.h>
#include <math.h>

int main(void)
{
    // int x = 7;
    // printf("x is %s digit\n", (x % 2 == 0) ? "an even" : "an odd");
    int a = 2, b = 3, c = 4;

    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    printf("max = %d\n", max);

    return 0;
}