#include <stdio.h>

int main()
{
    // char sp[] = "Hello, World!";
    // // printf("sp = %s\n", sp);
    // puts(sp);
    // puts(sp);

    char bf[10];
    // scanf("%9s", bf);
    fgets(bf, sizeof(bf), stdin);
    puts(bf);

    return 0;
}