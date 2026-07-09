#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    int valid = 1;
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        char c = str[i];
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
              (c >= '0' && c <= '9') || c == '.' || c == '_' ||
              c == '-' || c == '@'))
        {
            valid = 0;
            break;
        }
    }

    if (valid)
    {

        char *at = strchr(str, '@');
        if (!at || at == str || strrchr(str, '@') != at)
        {
            valid = 0;
        }
        else
        {

            char *dot = strchr(at + 1, '.');
            if (!dot || dot == at + 1)
            {
                valid = 0;
            }
            else
            {

                char *last_dot = strrchr(str, '.');
                if (last_dot == str + len - 1)
                {
                    valid = 0;
                }
            }
        }
    }

    printf("%d\n", valid);

    return 0;
}