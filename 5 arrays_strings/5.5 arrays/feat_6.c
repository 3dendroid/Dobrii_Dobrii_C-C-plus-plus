#include <stdio.h>
#define TOTAL 20

int main(void)
{
    short pows[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(pows) / sizeof(*pows);

    while (count < sz_ar && scanf("%hd", &pows[count]) == 1)
        count++;

    int i = 0;
    while (i < (int)count)
    {
        if (pows[i] % 3 == 0)
        {
            for (int j = i; j < (int)count - 1; j++)
                pows[j] = pows[j + 1];
            count--;
        }
        else
        {
            i++;
        }
    }

    for (int i = 0; i < (int)count; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%hd", pows[i]);
    }
    printf("\n");

    return 0;
}