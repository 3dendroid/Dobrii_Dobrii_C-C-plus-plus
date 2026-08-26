#include <stdio.h>
#include <string.h>

typedef struct
{
    char symbol;
    const char *code;
} MorseMap;

const MorseMap morse_table[] = {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"}, {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"}, {'Z', "--.."}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."}, {'8', "---.."}, {'9', "----."}, {'0', "-----"}, {' ', "-...-"}};

const size_t MORSE_SIZE = sizeof(morse_table) / sizeof(morse_table[0]);

char get_symbol_by_code(const char *code)
{
    for (size_t i = 0; i < MORSE_SIZE; i++)
    {
        if (strcmp(morse_table[i].code, code) == 0)
        {
            return morse_table[i].symbol;
        }
    }
    return '?';
}

void decode_morse(char *dst, const char *src)
{
    char temp_src[1000];
    strcpy(temp_src, src);
    size_t j = 0;
    char *token = strtok(temp_src, " ");

    while (token != NULL)
    {
        dst[j++] = get_symbol_by_code(token);
        token = strtok(NULL, " ");
    }
    dst[j] = '\0';
}

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    char result[100] = {0};
    decode_morse(result, str);

    printf("%s\n", result);

    return 0;
}