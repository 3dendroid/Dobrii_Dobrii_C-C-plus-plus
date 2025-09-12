#include <stdio.h>

int main(void)
{
    float x, y;
    
    scanf("%f %f", &x, &y);

    printf("%d", !(x >= -5 && x <= 10 && y >= 0 && y <= 7));

    return 0;
}
