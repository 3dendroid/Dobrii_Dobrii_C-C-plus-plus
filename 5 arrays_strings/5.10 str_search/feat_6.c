#include <stdio.h>
#include <string.h>

int main(void)
{
    char city[51];
    char result[600] = "";
    int count = 0;
    int first = 1;

    while (count < 10 && fgets(city, sizeof(city), stdin) != NULL)
    {

        char *ptr_n = strrchr(city, '\n');
        if (ptr_n)
            *ptr_n = '\0';

        if (strlen(city) == 0)
            continue;

        count++;

        if (strstr(city, "на") != NULL)
            continue;

        if (!first)
            strcat(result, " ");
        strcat(result, city);
        first = 0;
    }

    printf("%s\n", result);

    return 0;
}