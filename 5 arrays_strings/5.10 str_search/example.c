<<<<<<< HEAD
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
=======
# NEXT
>>>>>>> 603c409ff4ec06f7da2313c85da43e92880d6b99
