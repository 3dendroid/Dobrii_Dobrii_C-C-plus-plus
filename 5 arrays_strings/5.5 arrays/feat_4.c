#include <stdio.h>
#define TOTAL 10

int main(void)
{
    int digs[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(digs) / sizeof(*digs);

    while(count < sz_ar && scanf("%d", &digs[count]) == 1)
        count++;

    int insert_val = -1;
    int i = 0;
    int new_count = (int)count;

    while (i < new_count) {
        if (digs[i] == 5) {
            // сдвигаем элементы вправо
            for (int j = (int)sz_ar - 1; j > i + 1; j--)
                digs[j] = digs[j - 1];
            digs[i + 1] = insert_val;
            insert_val--;
            if (new_count < (int)sz_ar)
                new_count++;
            i += 2;
        } else {
            i++;
        }
    }

    for (int i = 0; i < new_count; i++) {
        if (i > 0) printf(" ");
        printf("%d", digs[i]);
    }
    printf("\n");

    return 0;
}