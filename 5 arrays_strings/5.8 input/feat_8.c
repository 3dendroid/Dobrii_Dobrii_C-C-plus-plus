#include <stdio.h>
#define TOTAL 500

int main(void)
{
    char str[TOTAL];
    fgets(str, TOTAL, stdin);

    int word_count = 0;
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n')
    {
        while (str[i] == ' ')
            i++;
        if (str[i] == '\0' || str[i] == '\n')
            break;

        word_count++;

        int start = i;
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
            i++;
        int end = i;

        if (word_count == 2)
        {
            for (int j = start; j < end; j++)
                printf("%c", str[j]);
            printf("\n");
            return 0;
        }
    }

    printf("no\n");
    return 0;
}