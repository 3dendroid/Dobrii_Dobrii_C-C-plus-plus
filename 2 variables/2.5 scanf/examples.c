#include <stdio.h>


int main(void)
{   
    unsigned int price = 0;
    double weight = 0.0;

    int res = scanf("%*llu; %u; %f", &price, &weight);

    printf("res = %d: price = %d, weight = %.2f", res, price, weight);

    return 0;
}