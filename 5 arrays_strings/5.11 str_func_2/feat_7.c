#include <stdio.h>
#include <string.h>

#define MAX_GRADES 20
#define MAX_LINE 256

int main(void)
{
    char name[100];
    int grades[MAX_GRADES];
    int count = 0;

    if (scanf("%99s", name) != 1)
        return 1;

    while (count < MAX_GRADES && scanf("%d", &grades[count]) == 1)
        count++;

    if (count == 0)
        return 1;

    char result[MAX_LINE];
    int pos = sprintf(result, "%s: %d", name, grades[0]);

    for (int i = 1; i < count; ++i)
        pos += sprintf(result + pos, ", %d", grades[i]);

    puts(result);

    return 0;
}
