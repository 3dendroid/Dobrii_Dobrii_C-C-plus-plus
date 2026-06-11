#include <stdio.h>

int main(void)
{
    int ar_2D[4][3];

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &ar_2D[i][j]);

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            if (i > 0)
                printf(" ");
            printf("%d", ar_2D[i][j]);
        }
        printf("\n");
    }

    __ASSERT_TESTS__
    return 0;
}