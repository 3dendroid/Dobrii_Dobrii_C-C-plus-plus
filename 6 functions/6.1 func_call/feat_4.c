#include <stdio.h>

long long pow_n(int n, int m)
{
    long long result = 1;
    for (int i = 0; i < m; i++)
        result *= n;
    return result;
}

int main(void)
{
    printf("%lld\n", pow_n(2, 4));

    return 0;
}