#include <stdio.h>

int main() {
    char input_char; 

    printf("Введите один символ: ");
    input_char = getchar();

    printf("Вот ваш символ: ");
    putchar(input_char);

    return 0;
}