#include <stdio.h>

int main(void)
{
    int b1; // первый член прогрессии
    int q;  // знаменатель прогрессии

    scanf("%d, %d", &b1, &q);

    // здесь продолжайте программу
    int res = ((q * q * q * q) - 1) * b1 / (q - 1);
    printf("%d", res);
    return 0;
}