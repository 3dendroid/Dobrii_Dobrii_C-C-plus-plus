#include <stdio.h>
#define SIZE 3

void show_pole(char ar[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (j > 0)
                printf(" ");
            if (ar[i][j] == 1)
                printf("x");
            else if (ar[i][j] == 2)
                printf("o");
            else
                printf("#");
        }
        printf("\n");
    }
}

int main(void)
{
    char pole[SIZE][SIZE] = {0};

    show_pole(pole);

    return 0;
}