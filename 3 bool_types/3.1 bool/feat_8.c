#include <stdio.h>

int main(void)
{
    float a;
    
    scanf("%f", &a);

    printf("%d", (a >= -10 && a < 0) || (a > 5 && a <= 12));

    return 0;
}
