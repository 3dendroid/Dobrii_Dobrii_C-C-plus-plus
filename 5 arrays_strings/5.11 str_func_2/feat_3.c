#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    char *ptr = strchr(str, ':');
    ptr++;

    int h = atoi(ptr);

    ptr = strchr(ptr, 'x');
    ptr++;

    int w = atoi(ptr);

    ptr = strchr(ptr, 'x');
    ptr++;

    int d = atoi(ptr);

    __ASSERT_TESTS__
    return 0;
}