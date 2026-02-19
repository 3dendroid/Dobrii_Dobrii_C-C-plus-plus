#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int a = 1, b = 1, i = 1;

    while (i <= n)
    {
        if (i == 1 || i == 2)
        {
            printf("1");
        }
        else
        {
            int c = a + b;
            a = b;
            b = c;
            printf("%d", b);
        }

        if (i < n)
            printf(" ");

        i++;
    }

    return 0;
}
