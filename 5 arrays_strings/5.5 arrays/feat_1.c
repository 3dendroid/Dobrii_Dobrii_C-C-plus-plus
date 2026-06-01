#include <stdio.h>

int main(void)
{
    short ar[10], marks[5];
    size_t count = 0;
    size_t sz_ar = sizeof(ar) / sizeof(*ar);

    while (count < sz_ar && scanf("%hd", &ar[count]) == 1)
        count++;

    size_t sz_marks = sizeof(marks) / sizeof(*marks);
    size_t count_marks = 0;

    for (int i = (int)count - 1; i >= 0 && count_marks < sz_marks; i--)
    {
        marks[count_marks] = ar[i];
        count_marks++;
    }
    for (size_t i = 0; i < count_marks; i++)
    {
        printf("%hd ", marks[i]);
    }

    return 0;
}