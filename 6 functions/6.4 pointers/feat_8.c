#include <stdio.h>
#define SIZE 3

int is_win(char ar[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        if (ar[i][0] != 0 && ar[i][0] == ar[i][1] && ar[i][1] == ar[i][2])
            return ar[i][0] == 'x' ? 1 : 2;
        if (ar[0][i] != 0 && ar[0][i] == ar[1][i] && ar[1][i] == ar[2][i])
            return ar[0][i] == 'x' ? 1 : 2;
    }

    if (ar[0][0] != 0 && ar[0][0] == ar[1][1] && ar[1][1] == ar[2][2])
        return ar[0][0] == 'x' ? 1 : 2;

    if (ar[0][2] != 0 && ar[0][2] == ar[1][1] && ar[1][1] == ar[2][0])
        return ar[0][2] == 'x' ? 1 : 2;

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (ar[i][j] == 0)
                return 0;

    return 3;
}

int main(void)
{
    char pole[SIZE][SIZE] = {0};
    char *ptr_p = &pole[0][0];
    int count = 0;
    while (count < SIZE * SIZE && scanf("%d", ptr_p) == 1)
    {
        *ptr_p = (*ptr_p == 1) ? 'x' : (*ptr_p == 2) ? 'o'
                                                     : *ptr_p;
        ptr_p++;
        count++;
    }

    printf("%d\n", is_win(pole));

    return 0;
}