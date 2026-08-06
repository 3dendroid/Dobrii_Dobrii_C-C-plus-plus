#include <stdio.h>
#define SIZE 4

void transpose(short ar[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
        for (int j = i + 1; j < SIZE; j++)
        {
            short tmp = ar[i][j];
            ar[i][j] = ar[j][i];
            ar[j][i] = tmp;
        }
}

int main(void)
{
    short matrix[SIZE][SIZE] = {0};
    short *ptr = &matrix[0][0];
    int count = 0;
    while (count < SIZE * SIZE && scanf("%hd", ptr) == 1)
    {
        ptr++;
        count++;
    }

    transpose(matrix);

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (j > 0)
                printf(" ");
            printf("%hd", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}