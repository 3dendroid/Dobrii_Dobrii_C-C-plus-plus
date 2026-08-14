#include <stdio.h>

int sum_big2(int a, int b, int c, int d)
{

    int ar[4] = {a, b, c, d};

    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 4; j++)
            if (ar[j] > ar[i])
            {
                int tmp = ar[i];
                ar[i] = ar[j];
                ar[j] = tmp;
            }

    return ar[0] + ar[1];
}

int main(void)
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("%d\n", sum_big2(a, b, c, d));

    return 0;
}