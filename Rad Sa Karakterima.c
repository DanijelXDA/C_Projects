#include <stdio.h>

int main(void) {
    char c;
    int i;

    printf("\nUnesite jedan znak i jedan ceo broj: ");
    scanf("%c %d", &c, &i);

    printf("\nUneli ste znak %c i broj: %d\n\n", c, i);

    return 0;
}
