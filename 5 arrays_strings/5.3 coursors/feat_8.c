#include <stdio.h>

int main(void)
{
    short var_1;
    int var_2;
    long long var_3;

    scanf("%hd, %d, %lld", &var_1, &var_2, &var_3);

    char *ptr1 = (char *)&var_1;
    char *ptr2 = (char *)&var_2;
    char *ptr3 = (char *)&var_3;

    for (int i = 0; i < sizeof(var_1); i++)
        printf("%u ", (unsigned char)ptr1[i]);

    for (int i = 0; i < sizeof(var_2); i++)
        printf("%u ", (unsigned char)ptr2[i]);

    for (int i = 0; i < sizeof(var_3); i++)
        printf("%u ", (unsigned char)ptr3[i]);

    return 0;
}