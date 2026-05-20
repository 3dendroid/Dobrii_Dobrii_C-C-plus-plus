#include <stdio.h>
#include <string.h>

int main(void)
{
    extern char buff_1[];
    extern char buff_2[];

    char buffer[128];
    char *ptr_ar = buffer;

    const char *src = buff_1;
    while (*src)
        *ptr_ar++ = *src++;

    src = buff_2;
    while (*src)
        *ptr_ar++ = *src++;

    *ptr_ar = '\0';
    return 0;
}