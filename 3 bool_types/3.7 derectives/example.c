#include <stdio.h>

#define FIVE 5
#define TEN 2 * FIVE
#define TEN
#undef TEN 10
#define TEXT "Hello, World!\n"
#define TEXT2 "Goodbye, World!\n"
#define PRINT_D printf("digit = %d\n", digit);
#define FORMAT "digit = %d\n"

int main()
{
    int digit = FIVE;
    digit = TEN;

    printf(FORMAT, digit);
    printf(TEXT);
    printf(TEXT2);

    return 0;
}