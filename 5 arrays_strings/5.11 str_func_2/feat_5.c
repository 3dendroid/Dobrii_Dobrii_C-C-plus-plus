#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TOTAL 10

// Максимальное количество товаров для хранения имен после фильтрации
char filtered_names[TOTAL][50];
int filtered_count = 0;

int main(void)
{
    char str[TOTAL][50];
    int count = 0;
    while (count < TOTAL && fgets(str[count], sizeof(str[0]) - 1, stdin))
    {
        char *ptr_n = strrchr(str[count], '\n');
        if (ptr_n != NULL)
            *ptr_n = '\0';
        count++;
    }

    // Фильтрация и вывод результатов.
    for (int i = 0; i < count; ++i)
    {
        char name[50];
        double weight_d;
        long price_l; // Используем long для целочисленной цены

        // Формат: Наименование товара: ID; Цена; Вес.
        // Мы используем sscanf для извлечения имени (до ":"),
        // пропускаем ID и извлекаем цену в виде long, а также вес.
        if (sscanf(str[i], "%49[^:]:%*d; %ld; %lf", name, &price_l, &weight_d) == 3)
        {
            long price = price_l;

            // Проверка условия: цена не равна 12300
            if (price != 12300)
            {
                // Сохраняем наименование. Используем копирование для безопасности.
                strcpy(filtered_names[filtered_count], name);
                filtered_count++;
            }
        }
    }

    // Вывод оставшихся наименований в одну строку через пробел
    for (int i = 0; i < filtered_count; ++i)
    {
        printf("%s", filtered_names[i]);
        if (i < filtered_count - 1)
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
