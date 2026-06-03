#include <stdio.h>
#define TOTAL 10

int main(void)
{
    int digs[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(digs) / sizeof(*digs);

    while (count < sz_ar && scanf("%d", &digs[count]) == 1)
        count++;

    int pos = -1;
    for (int i = 0; i < (int)count; i++)
    {
        if (digs[i] == 5)
        {
            pos = i;
            break;
        }
    }

    if (pos != -1)
    {
        for (int i = (int)sz_ar - 1; i > pos + 1; i--)
            digs[i] = digs[i - 1];
        digs[pos + 1] = -5;
        if (count < sz_ar)
            count++;
    }

    for (int i = 0; i < (int)count; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", digs[i]);
    }
    printf("\n");

    return 0;
}