#include <stdio.h>

int main(void)
{
    int rect_width = 1280, rect_height = 720;
    int w, h;
    scanf("%d; %d", &w, &h);

    // остатки от деления по ширине и по высоте
    int rem_w = rect_width  % w;
    int rem_h = rect_height % h;

    printf("%d %d", rem_w, rem_h);
    return 0;
}
