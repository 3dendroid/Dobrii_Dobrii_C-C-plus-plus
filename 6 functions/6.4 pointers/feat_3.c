#include <stdio.h>

int prod_ar(int ar[], int len)
{
    int prod = 1;
    for (int i = 0; i < len; i++)
        prod *= ar[i];
    return prod;
}

int main(void)
{
    int ar[20];
    int count = 0;

    while (count < 20 && scanf("%d", &ar[count]) == 1)
        count++;

    printf("%d\n", prod_ar(ar, count));

    return 0;
}