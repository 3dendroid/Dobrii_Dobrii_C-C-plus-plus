#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    scanf("%1023s", s);

    int l = 0;
    int r = strlen(s) - 1;

    while (l < r)
    {
        if (s[l] != s[r])
        {
            printf("no");
            return 0;
        }
        l++;
        r--;
    }

    printf("yes");
    return 0;
}




