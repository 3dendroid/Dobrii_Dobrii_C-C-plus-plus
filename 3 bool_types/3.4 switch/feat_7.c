#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    // Получаем первую цифру
    int first_digit = num / 1000;

    if (first_digit == 3)
        printf("yes");
    else
        printf("no");

    return 0;
}
