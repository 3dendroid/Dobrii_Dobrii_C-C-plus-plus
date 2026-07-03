#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    char result[100] = {0};
    char *ptr = str;
    char *found;

    while ((found = strstr(ptr, "-")) != NULL)
    {
        strncat(result, ptr, found - ptr);
        strcat(result, "-+-");
        ptr = found + 1;
    }
    strcat(result, ptr);

    printf("%s\n", result);

    return 0;
}