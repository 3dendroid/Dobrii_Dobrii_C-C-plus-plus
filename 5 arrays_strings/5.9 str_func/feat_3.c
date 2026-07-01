#include <stdio.h>
#include <string.h>

int main(void)
{
    char cities[6][51];

    for (int i = 0; i < 6; i++)
        scanf("%50s", cities[i]);

    // находим индексы двух наибольших по длине
    int first = 0, second = -1;

    for (int i = 1; i < 6; i++)
        if (strlen(cities[i]) > strlen(cities[first]))
            first = i;

    for (int i = 0; i < 6; i++)
    {
        if (i == first)
            continue;
        if (second == -1 || strlen(cities[i]) > strlen(cities[second]))
            second = i;
    }

    // выводим в порядке следования
    if (first < second)
        printf("%s %s\n", cities[first], cities[second]);
    else
        printf("%s %s\n", cities[second], cities[first]);

    return 0;
}