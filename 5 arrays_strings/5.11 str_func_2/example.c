#include <stdio.h>

int main()
{
    double width = 2.4, heiht = 0.75, depth = 3.14;
    char info[100];
    const char format[] = "(%.2f, %.2f, %.2f)";

    sprintf(info, format, width, heiht, depth);
    puts(info);

    return 0;
}