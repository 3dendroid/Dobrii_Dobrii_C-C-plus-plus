#include <stdio.h>
#define MAX_LENGTH 20

size_t range_to_ar(int *ptr_a, size_t max_len, int from, int to, size_t count)
{
    if (from > to || count >= max_len)
        return count;
    ptr_a[count] = from;
    return range_to_ar(ptr_a, max_len, from + 1, to, count + 1);
}

int main(void)
{
    int max_rec;
    int ar[MAX_LENGTH];
    scanf("%d", &max_rec);
    size_t cnt = range_to_ar(ar, MAX_LENGTH, 1, max_rec, 0);

    for (size_t i = 0; i < cnt; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", ar[i]);
    }
    printf("\n");

    return 0;
}