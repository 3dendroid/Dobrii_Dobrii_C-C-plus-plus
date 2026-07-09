#include <stdio.h>
#include <string.h>

int main(void)
{
    char cities[10][51];
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

        int dup = 0;
        for (int i = 0; i < count; i++)
        {
            if (strcmp(cities[i], city) == 0)
            {
                dup = 1;
                break;
            }
        }

        if (!dup)
        {
            strcpy(cities[count], city);
            if (!first)
                strcat(result, " ");
            strcat(result, city);
            first = 0;
        }

        count++;
    }

    printf("%s\n", result);

    return 0;
}