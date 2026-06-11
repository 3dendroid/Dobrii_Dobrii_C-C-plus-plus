#include <stdio.h>
#define ROWS 3
#define COLS 5

int main(void)
{
    short vls[ROWS][COLS] = {0};
    short *ptr_vls = &vls[0][0];
    short x;
    for (int i = 0; i < ROWS * COLS && scanf("%hd", &x) == 1; ++i)
        *ptr_vls++ = x;

    double mean[ROWS];

    for (int i = 0; i < ROWS; i++)
    {
        double sum = 0;
        for (int j = 0; j < COLS; j++)
            sum += vls[i][j];
        mean[i] = sum / COLS;
    }

    for (int i = 0; i < ROWS; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%.2f", mean[i]);
    }
    printf("\n");

    __ASSERT_TESTS__
    return 0;
}