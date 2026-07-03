#include <stdio.h>
#include <string.h>

int main()
{
    char s1[12] = "Hello";
    char s2[10] = "Hello";

    int res = strcmp(s1, s2);

    if (res == 0)
    {
        printf("The strings are equal.\n");
    }
    else if (res < 0)
    {
        printf("s1 is less than s2.\n");
    }
    else
    {
        printf("s1 is greater than s2.\n");
    }

    return 0;
}