#include <stdio.h>

int main(void)
{
    char source[] = "This is a string";
    char destination[10];

    const char *src = source;
    char *dst = destination;
    int max_len_copy = sizeof(destination);

    while (*src != '\0' && max_len_copy > 1)
    {
        *dst++ = *src++;
        *dst = '\0';
    }

    puts(destination);

    return 0;
}