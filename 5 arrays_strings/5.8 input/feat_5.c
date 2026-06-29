#include <stdio.h>

int main(void)
{
    char data[6][31];

    for (int i = 0; i < 6; i++)
        scanf("%30s", data[i]);

    int first = 1;
    for (int i = 0; i < 6; i++)
    {
        if (data[i][0] == 'G')
        {
            if (!first)
                printf(" ");
            printf("%s", data[i]);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}