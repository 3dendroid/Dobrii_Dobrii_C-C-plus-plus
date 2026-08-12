#include <stdio.h>
#include <string.h>

int is_not_latin(const char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return 0;
    }
    return 1;
}

void copy_string(char *dst, size_t max_len_dst, const char *src, int (*filter)(const char))
{
    if (max_len_dst == 0)
        return;

    size_t j = 0;
    size_t i = 0;

    while (src[i] != '\0' && j < max_len_dst - 1)
    {
        if (filter(src[i]))
        {
            dst[j] = src[i];
            j++;
        }
        i++;
    }
    dst[j] = '\0';
}

int main(void)
{
    char str[100] = {0}, str2[20];
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    copy_string(str2, sizeof(str2), str, is_not_latin);

    printf("%s\n", str2);

    return 0;
}