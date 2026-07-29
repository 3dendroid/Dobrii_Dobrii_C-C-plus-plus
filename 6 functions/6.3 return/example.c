#include <stdio.h>
#include "func.h"

int main(void)
{
    printf("Perimeter of square: %.2f\n", per_sq(2.5, 3.5));
    printf("Absolute value of -5: %d\n", abs_int(-5));
    printf("Square of 4: %d\n", sq_to_int(4));
    return 0;
}