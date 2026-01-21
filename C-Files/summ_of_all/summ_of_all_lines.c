#include <stdio.h>

int main() {
    int user_char, lines, tabs, spaces;
    lines = 0;
    tabs = 0;
    spaces = 0;
    
    while ((user_char = getchar()) != EOF)
        if (user_char == '\n')
            ++lines;
        else if (user_char == '\t')
            ++tabs;
        else if (user_char == ' ')
            ++spaces;
    
    printf("Строк: %d || Табуляций: %d || Пробелов: %d\n", lines, tabs, spaces);

    return 0;
}