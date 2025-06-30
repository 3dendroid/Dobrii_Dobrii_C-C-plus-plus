#include <stdio.h>

int main(void) {
    int s, m;

    if (scanf("%d %d", &s, &m) != 2) return 0;

    double discounted = s * (100 - m) / 100.0;
    double total = 2 * discounted;

    printf("%.2f\n", total);
    
    return 0;
}
