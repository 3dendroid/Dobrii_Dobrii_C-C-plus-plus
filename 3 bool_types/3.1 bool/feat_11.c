#include <stdio.h>

int main(void)
{
    int rect_width = 640, rect_height = 480;
    int w = 1, h = 1;

    scanf("%d; %d", &w, &h);

    int fit_w = rect_width / w;
    int fit_h = rect_height / h;

    int full = fit_w * fit_h;
    int total = (fit_w + (rect_width % w > 0)) *
                (fit_h + (rect_height % h > 0));

    int not_fit = total - full;

    printf("%d", not_fit);

    return 0;
}