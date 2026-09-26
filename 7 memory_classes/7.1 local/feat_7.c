#include <stdio.h>

int in_range(int n)
{
    return n >= 1 && n <= 5;
}

double mean_ar(const int *ar, size_t len_ar, int (*check)(int))
{
    double sum = 0;
    int count = 0;

    for (size_t i = 0; i < len_ar; i++)
    {
        if (check(ar[i]))
        {
            sum += ar[i];
            count++;
        }
    }

    if (count == 0)
        return 0.0;
    return sum / count;
}

int main(void)
{
    int marks[20] = {0};
    int x;
    int count = 0;

    while (count < 20 && scanf("%d", &x) == 1)
    {
        marks[count++] = x;
    }

    printf("%.1f\n", mean_ar(marks, count, in_range));

    return 0;
}