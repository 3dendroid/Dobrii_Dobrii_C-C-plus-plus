#include <stdio.h>
#include <string.h>

int main(void)
{
    char time_str[9];
    scanf("%8s", time_str);

    char hh[3], mm[3], ss[3];

    strncpy(hh, time_str, 2);
    hh[2] = '\0';
    strncpy(mm, time_str + 3, 2);
    mm[2] = '\0';
    strncpy(ss, time_str + 6, 2);
    ss[2] = '\0';

    printf("%s:%s:%s\n", ss, mm, hh);

    return 0;
}