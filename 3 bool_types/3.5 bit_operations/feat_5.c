#include <stdio.h>

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);

    unsigned char mask = ~(1 << 7 | 1 << 6); // маска с нулями в 7 и 6 битах
    unsigned char res = bits & mask;         // выключаем нужные биты

    printf("%d\n", res);

    return 0;
}
