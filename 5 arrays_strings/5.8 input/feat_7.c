#include <stdio.h>
#define TOTAL 500

int main(void)
{
    char str[TOTAL];
    fgets(str, TOTAL, stdin);

    int count = 0;
    int in_word = 0;

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (str[i] != ' ')
        {
            if (!in_word)
            {
                count++;
                in_word = 1;
            }
        }
        else
        {
            in_word = 0;
        }
    }

    printf("%d\n", count);

    return 0;
}