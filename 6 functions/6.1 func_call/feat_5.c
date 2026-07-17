#include <stdio.h>

int get_volume(int h, int w, int d)
{
    return h * w * d;
}

int main(void)
{
    int height, width, depth;

    if (scanf("%d %d %d", &height, &width, &depth) == 3)
    {
        int volume = get_volume(height, width, depth);

        printf("%d", volume);
    }

    return 0;
}