#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TOTAL 10

int main(void)
{
    char str[TOTAL][50], *p_sort[TOTAL];
    int count = 0;
    while (count < TOTAL && fgets(str[count], sizeof(str[0]) - 1, stdin))
    {
        char *ptr_n = strrchr(str[count], '\n');
        if (ptr_n != NULL)
            *ptr_n = '\0';
        count++;
    }

    double weights[TOTAL];

    for (int i = 0; i < count; ++i)
    {
        p_sort[i] = str[i];
        char dummy[50];
        int id, price;
        double weight;
        if (sscanf(str[i], "%49[^:]: %d; %d; %lf", dummy, &id, &price, &weight) == 4)
            weights[i] = weight;
    }

    for (int i = 0; i < count - 1; ++i)
    {
        for (int j = 0; j < count - 1 - i; ++j)
        {
            if (weights[j] < weights[j + 1])
            {
                double tmp_w = weights[j];
                weights[j] = weights[j + 1];
                weights[j + 1] = tmp_w;

                char *tmp_p = p_sort[j];
                p_sort[j] = p_sort[j + 1];
                p_sort[j + 1] = tmp_p;
            }
        }
    }

    for (int i = 0; i < count; ++i)
    {
        char name[50];
        sscanf(p_sort[i], "%49[^:]", name);
        printf("%s", name);
        if (i < count - 1)
            printf(" ");
    }

    return 0;
}
