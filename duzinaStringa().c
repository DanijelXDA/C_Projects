#include <stdio.h>

int duzinaStringa(char *string) {
    int i = 0;
    while( string[i] != '\0') // Broje se svi karakteri!
        i++;

    return i;
}

int main(void) {
    char string[] = "Struktuirano programiranje";

    printf("\nDuzina stringa %s je %d\n", string, duzinaStringa(string)); // 26

    return 0;
}
