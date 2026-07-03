#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    int count = 0;
    char *ptr = str;

    while ((ptr = strstr(ptr, "is")) != NULL)
    {
        count++;
        ptr += 2;
    }

    printf("%d\n", count);

    return 0;
}