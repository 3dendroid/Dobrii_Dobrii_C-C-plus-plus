#include <stdio.h>

int main(void)
{
    unsigned int a;
    if (scanf("%u", &a) != 1 || a > 7 || a < 1)
    {
        printf("неверный номер дня недели");
        return 0;
    }

    if (a == 1)
        printf("понедельник");
    else if (a == 2)
        printf("вторник");
    else if (a == 3)
        printf("среда");
    else if (a == 4)
        printf("четверг");
    else if (a == 5)
        printf("пятница");
    else if (a == 6)
        printf("суббота");
    else if (a == 7)
        printf("воскресенье");

    return 0;
}
