#include <stdio.h>
#define TOTAL 100

int main(void)
{
    char str[TOTAL];
    fgets(str, TOTAL, stdin);

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n')
        i++;
    str[i] = '\0';

    int write = 0;
    for (int read = 0; str[read] != '\0'; read++)
    {
        if (str[read] != 'e')
            str[write++] = str[read];
    }
    str[write] = '\0';

    printf("%s\n", str);

    return 0;
}