#include <stdio.h>
#define TOTAL 20

int main(void)
{
    float ws[TOTAL] = {0.0f};
    size_t count = 0;
    size_t sz_ar = sizeof(ws) / sizeof(*ws);

    while (count < sz_ar && scanf("%f", &ws[count]) == 1)
        count++;

    // сортировка выбором
    for (int i = 0; i < (int)count - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < (int)count; j++)
        {
            if (ws[j] < ws[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
        {
            float tmp = ws[i];
            ws[i] = ws[min_idx];
            ws[min_idx] = tmp;
        }
    }

    for (int i = 0; i < (int)count; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%.2f", ws[i]);
    }
    printf("\n");

    return 0;
}