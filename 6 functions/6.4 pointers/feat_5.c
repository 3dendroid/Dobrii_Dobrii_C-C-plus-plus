#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int get_data_csv(double ar[], int max_len, const char *str)
{
    // пропускаем "csv: "
    char *ptr = strchr(str, ':');
    if (!ptr)
        return 0;
    ptr++; // пропускаем ':'

    int count = 0;
    while (count < max_len)
    {
        // пропускаем пробелы и точки с запятой
        while (*ptr == ' ' || *ptr == ';')
            ptr++;
        if (*ptr == '\0')
            break;

        ar[count++] = atof(ptr);

        // сдвигаемся до следующего ';' или конца
        ptr = strchr(ptr, ';');
        if (!ptr)
            break;
    }

    return count;
}

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    double ar[20];
    int count = get_data_csv(ar, 20, str);

    for (int i = 0; i < count; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%.2f", ar[i]);
    }
    printf("\n");

    return 0;
}