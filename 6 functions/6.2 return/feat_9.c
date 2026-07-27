#include <stdio.h>

double get_qm(double qm_1, int m, int x)
{
    return (double)(m - 1) / m * qm_1 + 1.0 / m * x;
}

int main(void)
{
    int x;
    int m = 1;
    double qm = 0, qm_1 = 0;

    while (scanf("%d", &x) == 1)
    {
        qm = get_qm(qm_1, m, x);
        qm_1 = qm;
        m++;
    }

    printf("%.3f\n", qm);

    return 0;
}