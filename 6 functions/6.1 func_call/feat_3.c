#include <stdio.h>

long long fact(int n)
{
    if (n < 0) return -1;
    long long result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}

int main(void)
{
    printf("%lld\n", fact(6));

    return 0;
}