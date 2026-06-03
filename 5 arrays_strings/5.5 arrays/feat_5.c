#include <stdio.h>
#define TOTAL 20

int main(void)
{
    short pows[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(pows) / sizeof(*pows);

    while(count < sz_ar && scanf("%hd", &pows[count]) == 1)
        count++;

    // ищем первый чётный элемент
    int pos = -1;
    for (int i = 0; i < (int)count; i++) {
        if (pows[i] % 2 == 0) {
            pos = i;
            break;
        }
    }

    // удаляем сдвигом влево
    if (pos != -1) {
        for (int i = pos; i < (int)count - 1; i++)
            pows[i] = pows[i + 1];
        count--;
    }

    for (int i = 0; i < (int)count; i++) {
        if (i > 0) printf(" ");
        printf("%hd", pows[i]);
    }
    printf("\n");

    return 0;
}