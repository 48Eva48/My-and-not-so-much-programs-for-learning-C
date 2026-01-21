#include <stdio.h>

int main() {
    double num_of_chars;
    for (num_of_chars = 0; getchar() != EOF; ++num_of_chars) {}
    
    printf("%.0f\n", num_of_chars - 1);

    return 0;
}