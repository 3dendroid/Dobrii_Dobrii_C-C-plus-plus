#include <stdio.h>
#include <string.h>

int main(void)
{
    char ps[7][50];
    char ps_sort[400] = "";

    for (int i = 0; i < 7; i++)
        scanf("%49s", ps[i]);

    // сортировка выбором по длине (устойчивая — сохраняет порядок равных)
    for (int i = 0; i < 6; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < 7; j++)
            if (strlen(ps[j]) < strlen(ps[min_idx]))
                min_idx = j;
        if (min_idx != i)
        {
            char tmp[50];
            strcpy(tmp, ps[i]);
            strcpy(ps[i], ps[min_idx]);
            strcpy(ps[min_idx], tmp);
        }
    }

    // собираем строку
    for (int i = 0; i < 7; i++)
    {
        if (i > 0)
            strcat(ps_sort, " ");
        strcat(ps_sort, ps[i]);
    }

    printf("%s\n", ps_sort);

    __ASSERT_TESTS__
    return 0;
}