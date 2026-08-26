#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char symbol;
    const char *code;
} MorseMap;

const MorseMap morse_table[] = {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"}, {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"}, {'Z', "--.."}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."}, {'8', "---.."}, {'9', "----."}, {'0', "-----"}, {' ', "-...-"}};

const size_t MORSE_SIZE = sizeof(morse_table) / sizeof(morse_table[0]);

const char *get_morse_code(char c)
{
    c = toupper((unsigned char)c);
    for (size_t i = 0; i < MORSE_SIZE; i++)
    {
        if (morse_table[i].symbol == c)
        {
            return morse_table[i].code;
        }
    }
    return "";
}

void encode_morse(char *dst, const char *src)
{
    dst[0] = '\0';
    size_t len = strlen(src);

    for (size_t i = 0; i < len; i++)
    {
        const char *code = get_morse_code(src[i]);
        strcat(dst, code);

        if (i < len - 1)
        {
            strcat(dst, " ");
        }
    }
}

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    char result[1000] = {0};
    encode_morse(result, str);

    printf("%s\n", result);

    return 0;
}