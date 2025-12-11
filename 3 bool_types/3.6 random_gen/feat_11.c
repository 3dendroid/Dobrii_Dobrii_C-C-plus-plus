#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned short N;
    scanf("%hu", &N);

    double cm = N * 2.54;
    printf("%d", (int)round(cm));

    return 0;
}
