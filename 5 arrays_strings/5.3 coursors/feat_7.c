#include <stdio.h>

int main(void)
{
    double arr[20];
    int n = 0;
    double sum = 0;

    while (scanf("%lf", &arr[n]) == 1)
    {
        sum += arr[n];
        n++;
    }

    printf("%.2lf", sum / n);

    return 0;
}
