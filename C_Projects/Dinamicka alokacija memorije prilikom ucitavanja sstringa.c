#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *staro_p = NULL;
    char *novo_p;
    char c;
    int i = 0;

    while( (c = getchar()) != '\n' ) {
        if(i % 10 == 0) {
            novo_p = realloc( staro_p, (i + 10) * sizeof(char) );

            if(novo_p == NULL) {
                printf("Neuspesno alociranje\n");
                break; // break prekida izvrasavanje while()
            } else
                staro_p = novo_p;
        };

        staro_p[i++] = c;
    }

    novo_p = realloc( staro_p, (i + 1) * sizeof(char) );

    if(novo_p == NULL) {
        printf("Neuspesno alociranje\n");
        i--;
    } else
        staro_p = novo_p;

        // Postavljamo zavrsni znak

     staro_p[i] = '\0';

     printf("%s\n", staro_p);

     free(staro_p);

     return 0;
}
