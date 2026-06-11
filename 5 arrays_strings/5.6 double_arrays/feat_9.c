#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
#define MINES 12

int can_place(char pg[SIZE][SIZE], int r, int c)
{
    for (int i = r - 1; i <= r + 1; i++)
        for (int j = c - 1; j <= c + 1; j++)
            if (i >= 0 && i < SIZE && j >= 0 && j < SIZE)
                if (pg[i][j] == '*')
                    return 0;
    return 1;
}

int main(void)
{
    char pg[SIZE][SIZE] = {0};
    srand(time(NULL));

    int placed = 0;
    while (placed < MINES)
    {
        int r = rand() % SIZE;
        int c = rand() % SIZE;
        if (pg[r][c] == 0 && can_place(pg, r, c))
        {
            pg[r][c] = '*';
            placed++;
        }
    }

    __assert_verify_pg(pg);
    return 0;
}