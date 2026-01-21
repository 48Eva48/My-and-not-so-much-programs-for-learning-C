#include <stdio.h>

/* печать таблицы температур по Фаренгейту
и Цельсию для fahr = 0, 20, ..., 300 */

int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* нижняя граница таблицы температур */
    upper = 300; /* верхняя граница */
    step = 20; /* шаг */
    fahr = lower;

    printf("Фаренгейты -> Цельсии:\n");

    /*Цикл, который переводит градусы по фаренгейту в градусы по цельсию*/
    while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf ("%3.0f  -> %5.1f\n", fahr, celsius);
    fahr = fahr + step;
    }

    celsius = lower;

    printf("Цельсии -> Фаренгейты:\n");

    /*Цикл, который переводит градусы по цельсию в градусы по фаренгейту*/
    while (celsius <= upper) {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf ("%3.0f  -> %5.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}