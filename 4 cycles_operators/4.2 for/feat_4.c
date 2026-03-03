#include <stdio.h>

int main(void)
{
    int b1, q, n;
    scanf("%d; %d; %d", &b1, &q, &n);

    int val = b1;

for (int i = 0; i < n; i++)
{
    printf("%d", val);
    if (i < n - 1)
        printf(" ");

    val *= q;
}

    return 0;
}