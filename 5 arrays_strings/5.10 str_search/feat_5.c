#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    int read = 0, write = 0;
    while (str[read] != '\0')
    {
        str[write++] = str[read];
        if (str[read] == '-')
            while (str[read + 1] == '-')
                read++;
        read++;
    }
    str[write] = '\0';

    printf("%s\n", str);

    return 0;
}