#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    float val;
    char str[20];

    strcpy(str, "10500");
    val = atof(str);
    printf("Uneti string = %s, Realna vrednost stringa = %f\n", str, val);

    strcpy(str, "programiranje");
    val = atof(str);
    printf("\nUneti string = %s, Realna vrednost stringa = %f\n", str, val);

    return 0;
}
