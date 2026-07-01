#include <stdio.h>
#include <string.h>

int main(void)
{
    char cities[6][51];

    for (int i = 0; i < 6; i++)
        scanf("%50s", cities[i]);

    int max_idx = 0;
    for (int i = 1; i < 6; i++)
        if (strlen(cities[i]) > strlen(cities[max_idx]))
            max_idx = i;

    printf("%s\n", cities[max_idx]);

    return 0;
}