#include <stdio.h>
#include <string.h>

int match_ab(const char a, const char b)
{
    int a_digit = (a >= '0' && a <= '9');
    int b_digit = (b >= '0' && b <= '9');

    if (a_digit && !b_digit)
        return 1;
    if (!a_digit && b_digit)
        return 0;
    return a < b;
}

void sort_string(char *str, size_t max_len, int (*cmp)(const char, const char))
{
    size_t len = strlen(str);
    if (len > max_len)
        len = max_len;

    for (size_t i = 0; i < len - 1; i++)
        for (size_t j = 0; j < len - i - 1; j++)
            if (cmp(str[j + 1], str[j]))
            {
                char tmp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = tmp;
            }
}

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    sort_string(str, sizeof(str) - 1, match_ab);
    printf("%s\n", str);

    return 0;
}