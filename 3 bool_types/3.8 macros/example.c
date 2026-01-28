#include <stdio.h>

#define SQ_PR(A, B) ((A) * (B))
#define TEXT(A, B) "Square of rectangle (" #A ") x (" #B ")\n"
#define X_N(N) x##N

int main(void)
{
    int x1 = 1, x2 = 2, x4 = 10;
    printf("%d\n", X_N(4));

    // int res = SQ_PR(2,3);
    // printf(TEXT(x + 2, y - 3));

    return 0;
}