#include <stdio.h>
#include <string.h>

int to_csv(char *str, double ar[], int len)
{
    int pos = 0;
    pos += sprintf(str, "csv:");

    for (int i = 0; i < len; i++)
    {
        if (i == 0)
            pos += sprintf(str + pos, " %.2f", ar[i]);
        else
            pos += sprintf(str + pos, "; %.2f", ar[i]);
    }

    return len;
}

int main(void)
{
    double ar[20];
    int count = 0;
    char str[100];

    while (count < 20 && scanf("%lf", &ar[count]) == 1)
        count++;

    to_csv(str, ar, count);
    printf("%s\n", str);

    return 0;
}