#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

double csv[50];
int element_count = 0;

void skip_separators(char **p)
{
    while (**p != '\0' && (isspace((unsigned char)**p) || **p == ';'))
    {
        (*p)++;
    }
}

int parse_next_double(char **p)
{
    skip_separators(p);

    if (**p == '\0')
    {
        return 0;
    }

    char *start_ptr = *p;
    char *end_ptr = NULL;
    double value = strtod(start_ptr, &end_ptr);

    if (end_ptr == start_ptr)
    {
        return 0;
    }

    *p = end_ptr;

    if (!isfinite(value) || element_count >= 50)
    {
        return 0;
    }

    csv[element_count++] = value;
    return 1;
}

int main(void)
{
    char str[200] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    const char *prefix = "csv: ";
    char *current_pos = str;

    if (strncmp(current_pos, prefix, strlen(prefix)) == 0)
    {
        current_pos += strlen(prefix);
    }

    char *p = current_pos;

    while (parse_next_double(&p))
    {
    }

    __ASSERT_TESTS__
    return 0;
}
