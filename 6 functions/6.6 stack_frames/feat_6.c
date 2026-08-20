#include <stdio.h>
#include <string.h>

void strip_str(char *str, const char *del)
{
    int write = 0;
    for (int read = 0; str[read] != '\0'; read++)
    {
        if (strchr(del, str[read]) == NULL)
            str[write++] = str[read];
    }
    str[write] = '\0';
}

int main(void)
{
    char str[100] = {0}, str2[20];
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    strip_str(str, ".,-!?");
    printf("%s\n", str);

    return 0;
}