#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
    srand(time(NULL));

    int range = 10;

    int r_1 = rand() % range;
    int r_2 = rand() % range - 5;
    int r_3 = rand() + rand();

    double range_float = (double)rand() / (double)RAND_MAX;

    printf("%d, %d, %.2f\n", r_1, r_2, range_float);

    return 0;
}
