#include <stdio.h>

int sq_rect(int width, int height)
{
    return width * height;
}

int per_rect(int width, int height)
{
    return 2 * (width + height);
}

void print_hi()
{
    printf("Hi\n");
}

int main(void)
{
    int (*ptr_func)(int, int) = sq_rect;
    int (*ptr_func2)(int, int) = per_rect;
    void (*ptr_hi)() = print_hi;
    ptr_hi();

    return 0;
}