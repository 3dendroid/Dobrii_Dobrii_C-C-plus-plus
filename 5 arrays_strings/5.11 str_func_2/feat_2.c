#include <stdio.h>
#include <string.h>

int main(void)
{
    int h, m, s;
    scanf("%d %d %d", &h, &m, &s);

    char sh[3], sm[3], ss[3];

    if (h >= 0 && h <= 23)
        sprintf(sh, "%02d", h);
    else
        strcpy(sh, "--");

    if (m >= 0 && m <= 59)
        sprintf(sm, "%02d", m);
    else
        strcpy(sm, "--");

    if (s >= 0 && s <= 59)
        sprintf(ss, "%02d", s);
    else
        strcpy(ss, "--");

    printf("%s:%s:%s\n", sh, sm, ss);

    return 0;
}