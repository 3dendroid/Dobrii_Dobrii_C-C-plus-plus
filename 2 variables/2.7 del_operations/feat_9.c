#include <stdio.h>

int main(void)
{
    int h, w;
    // читаем два целых через запятую, например: "3,4"
    scanf("%d,%d", &h, &w);
    // сразу в printf увеличиваем каждую на 1 и перемножаем
    printf("%d\n", (h + 1) * (w + 1));
    return 0;
}
