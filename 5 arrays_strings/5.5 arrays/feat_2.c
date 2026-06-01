#include <stdio.h>

#define SIZE_BUFFER 128

int main(void)
{
    int buffer[SIZE_BUFFER];
    size_t count = 0;
    size_t sz_ar = sizeof(buffer) / sizeof(*buffer);

    while (count < sz_ar && scanf("%d", &buffer[count]) == 1)
        count++;

    size_t half = count / 2;
    size_t offset = count - half;

    for (size_t i = 0; i < half; i++)
    {
        int temp = buffer[i];
        buffer[i] = buffer[i + offset];
        buffer[i + offset] = temp;
    }

    for (size_t i = 0; i < count; i++)
    {
        printf("%d ", buffer[i]);
    }

    return 0;
}