
#include <stdio.h>

int main(void)
{
    int n, i = 1;
    double s = 0.0;

    scanf("%d", &n);

    do {
        s += 1.0 / i;
        i++;
    } while (i <= n);

    printf("%.2f", s);

    return 0;
}



