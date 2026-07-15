#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINE 256
#define MAX_GRADES 20

int main(void)
{
    char str[MAX_LINE];

    if (fgets(str, sizeof(str), stdin) == NULL)
        return 1;

    // Strip trailing newline
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    // Find ": " separator
    char *sep = strstr(str, ": ");
    if (sep == NULL)
        return 1;

    // Skip past ": "
    sep += 2;

    int grades[MAX_GRADES];
    int count = 0;

    while (*sep && count < MAX_GRADES)
    {
        char *endptr = NULL;
        long val = strtol(sep, &endptr, 10);

        // If no digits were found, break
        if (endptr == sep)
            break;

        grades[count++] = (int)val;
        sep = endptr;

        // Skip comma and optional spaces
        while (*sep == ',' || *sep == ' ')
            sep++;
    }

    if (count == 0)
        return 1;

    double sum = 0.0;
    for (int i = 0; i < count; ++i)
        sum += grades[i];

    printf("%.3f\n", sum / count);

    return 0;
}
