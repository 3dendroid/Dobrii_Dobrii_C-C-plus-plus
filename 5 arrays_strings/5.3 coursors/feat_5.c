#include <stdio.h>

int main(void)
{
    int value;
    scanf("%d", &value);

    unsigned char ar_d[sizeof(int)];
    unsigned char *ptr = (unsigned char *)&value;

    for (int i = 0; i < (int)sizeof(int); i++)
        ar_d[i] = ptr[i];

    for (int i = 0; i < (int)sizeof(int); i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", ar_d[i]);
    }
    printf("\n");
    return 0;
}