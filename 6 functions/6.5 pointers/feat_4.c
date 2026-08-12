#include <stdio.h>

int is_even(int value)
{
    return value % 2 == 0;
}

int sum_ar(const int *ar, size_t len_ar, int (*predicate)(int))
{
    int total_sum = 0;
    for (size_t i = 0; i < len_ar; i++)
    {
        if (predicate(ar[i]))
        {
            total_sum += ar[i];
        }
    }
    return total_sum;
}

int main(void)
{
    int marks[20] = {0};
    int x;
    size_t count = 0;

    while (scanf("%d", &x) == 1)
    {
        if (count < 20)
        {
            marks[count] = x;
            count++;
        }
    }

    int result = sum_ar(marks, count, is_even);
    printf("%d\n", result);

    return 0;
}