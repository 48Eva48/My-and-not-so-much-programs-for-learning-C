#include <stdio.h>

#define SIZE 10
/* подсчет цифр, символов-разделителей и прочих символов */

int main()
{
    int c, i, j, nwhite, nother;
    int ndigit[SIZE];
    nwhite = nother = 0;

    for (i = 0; i < SIZE; ++i)
        ndigit[i]= 0;
        
    while ((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9' )
            ++ndigit[c - '0' ];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }

    for (i = 0; i < SIZE; ++i) {
        printf("%d -- || ", i);
        for (j = 0; j < ndigit[i]; ++j) 
            printf("#");
        printf("\n");
    } printf ("символы-разделители = %d, прочие = %d\n", nwhite, nother);

    c = getchar();

    return 0;
}
