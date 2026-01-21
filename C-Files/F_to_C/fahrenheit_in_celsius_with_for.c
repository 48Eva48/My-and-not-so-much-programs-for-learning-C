#include <stdio.h>

/* печать таблицы температур по Фаренгейту и Цельсию с помощью цикла for*/

int main() {
    int fahr;

    #define LOWER 0 /* нижняя граница таблицы */
    #define UPPER 300 /* верхняя граница */
    #define STEP 20 /* размер шага */

    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
        printf ("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

    return 0;
}