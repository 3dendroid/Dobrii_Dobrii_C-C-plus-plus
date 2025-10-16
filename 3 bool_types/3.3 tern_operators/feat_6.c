#include <stdio.h>

int main(void)
{
    short type = 0;
    double w, h;

    if (scanf("%hd %lf %lf", &type, &w, &h) != 3) {
        printf("Input error.");
        return 0;
    }

    double result = (type == 1) ? (w * h) : 
                    (type == 2) ? (2 * (w + h)) : 
                    -1;

    (type == 1 || type == 2) ? printf("%.1f", result) : printf("%d", (int)result);

    return 0;
}
