#include <stdio.h>
#define TOTAL 20

int main(void)
{
    float ws[TOTAL] = {0.0f};
    size_t count = 0;
    size_t sz_ar = sizeof(ws) / sizeof(*ws);

    while (count < sz_ar && scanf("%f", &ws[count]) == 1)
        count++;

    int start = (int)count / 2;

    // сортировка выбором по убыванию второй половины
    for (int i = start; i < (int)count - 1; i++)
    {
        int max_idx = i;
        for (int j = i + 1; j < (int)count; j++)
        {
            if (ws[j] > ws[max_idx])
                max_idx = j;
        }
        if (max_idx != i)
        {
            float tmp = ws[i];
            ws[i] = ws[max_idx];
            ws[max_idx] = tmp;
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