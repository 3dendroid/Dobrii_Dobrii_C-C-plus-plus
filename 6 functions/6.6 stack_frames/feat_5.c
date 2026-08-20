#include <stdio.h>
#define MAX_SIZE 20

void reverse(short *ar, int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        short tmp = ar[i];
        ar[i] = ar[len - 1 - i];
        ar[len - 1 - i] = tmp;
    }
}

int main(void)
{
    short digs[MAX_SIZE];
    int count = 0;
    while (count < MAX_SIZE && scanf("%hd", &digs[count]) == 1)
        count++;

    reverse(digs, count);

    for (int i = 0; i < count; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%hd", digs[i]);
    }
    printf("\n");

    return 0;
}