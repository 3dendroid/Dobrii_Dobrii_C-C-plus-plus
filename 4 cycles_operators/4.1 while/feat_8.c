#include <stdio.h>

int main(void)
{
    int first = 1;

    for (int i = 100; i <= 999; i++)
    {
        if (i % 47 == 6 || i % 53 == 45)
        {
            if (!first)
                printf(" ");

            printf("%d", i);
            first = 0;
        }
    }

    return 0;
}