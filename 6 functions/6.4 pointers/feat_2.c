#include <stdio.h>

int sum_ar(int ar[], int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
        sum += ar[i];
    return sum;
}

int main(void)
{
    int ar[10];
    for (int i = 0; i < 10; i++)
        scanf("%d", &ar[i]);

    printf("%d\n", sum_ar(ar, 10));

    return 0;
}