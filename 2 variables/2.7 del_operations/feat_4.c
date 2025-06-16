#include <stdio.h>

int main(void)
{
    unsigned short time_h = 10, time_m = 33, time_s = 5;
    unsigned short h, m, s;
    scanf("%hu; %hu; %hu", &h, &m, &s);

    // 1) Сложение секунд и перенос в минуты
    unsigned short sum_s = time_s + s;
    unsigned short res_s = sum_s % 60;
    unsigned short carry_m = sum_s / 60;

    // 2) Сложение минут и перенос в часы
    unsigned short sum_m = time_m + m + carry_m;
    unsigned short res_m = sum_m % 60;
    unsigned short carry_h = sum_m / 60;

    // 3) Сложение часов и закрытие суток
    unsigned short sum_h = time_h + h + carry_h;
    unsigned short res_h = sum_h % 24;

    // 4) Вывод в формате hh:mm:ss
    printf("%02hu:%02hu:%02hu\n", res_h, res_m, res_s);
    return 0;
}
