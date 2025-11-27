#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int r1 = rand() % (N + 1);
    int r2 = rand() % (N + 1);
    int r3 = rand() % (N + 1);
    int r4 = rand() % (N + 1);
    int r5 = rand() % (N + 1);
    int r6 = rand() % (N + 1);
    int r7 = rand() % (N + 1);

    printf("%d %d %d %d %d %d %d", r1, r2, r3, r4, r5, r6, r7);

    return 0;
}