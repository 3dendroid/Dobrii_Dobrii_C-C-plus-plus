#include <stdio.h>

int is_odd(int x)
{
    return x % 2 != 0;
}

int is_positive(int x)
{
    return x >= 0;
}

int is_negative(int x)
{
    return x < 0;
}

int deflt(int x)
{
    return 1;
}

int sum_ar(const int *ar, size_t len_ar, int (*filter)(int))
{
    int sum = 0;
    for (size_t i = 0; i < len_ar; i++)
    {
        if (filter(ar[i]))
        {
            sum += ar[i];
        }
    }
    return sum;
}

int main(void)
{

    int (*funcs[4])(int) = {is_odd, is_positive, is_negative, deflt};

    int type = 0;
    if (scanf("%d", &type) != 1)
    {
        return 0;
    }

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

    int res = 0;

    switch (type)
    {
    case 1:
        res = sum_ar(marks, count, funcs[0]);
        break;
    case 2:
        res = sum_ar(marks, count, funcs[1]);
        break;
    case 3:
        res = sum_ar(marks, count, funcs[2]);
        break;
    default:
        res = sum_ar(marks, count, funcs[3]);
        break;
    }

    printf("%d\n", res);

    return 0;
}