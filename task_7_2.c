#include <stdio.h>
#include <ctype.h>

int main(void) {
    int ch;
    int total_count = 0;
    int target_count = 0;

    printf("Введите текст для анализа:\n");

    while ((ch = getchar()) != EOF) {
        total_count++;
        if (ch % 11 == 0) {
            target_count++;
        }
    }

    printf("\n   Статистика    \n");
    printf("Количество символов, чей ASCII-код кратен 11: %d\n", target_count);
    printf("Общее количество обработанных символов: %d\n", total_count);

    return 0;
}
