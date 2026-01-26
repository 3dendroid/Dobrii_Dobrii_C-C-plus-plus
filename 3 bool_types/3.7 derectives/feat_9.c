#include <stdio.h>

#define MAX_BUFF_SIZE 1024

int main(void)
{
    int buff_size;

    scanf("%d", &buff_size);

    buff_size = (buff_size > MAX_BUFF_SIZE) ? MAX_BUFF_SIZE : buff_size;

    printf("%d", buff_size);

    return 0;
}
