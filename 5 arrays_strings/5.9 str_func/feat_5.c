#include <stdio.h>
#include <string.h>

int main(void)
{
    char ps[7][50];
    char ps_res[400] = "";

    for (int i = 0; i < 7; i++)
        scanf("%49s", ps[i]);

    for (int i = 0; i < 7; i++)
    {
        strcat(ps_res, ps[i]);
        if (i < 6)
            strcat(ps_res, " ");
    }

    printf("%s\n", ps_res);

    __ASSERT_TESTS__
    return 0;
}