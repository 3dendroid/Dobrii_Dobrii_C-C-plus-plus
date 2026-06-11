#include <stdio.h>

int main(void)
{
    int ar_2D[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &ar_2D[i][j]);

    __ASSERT_TESTS__
    return 0;
}