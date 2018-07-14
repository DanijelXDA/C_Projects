#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int val;
    char str[20];

    strcpy(str, "505");
    val = atoi(str);
    printf("Uneti string = %s, Celobrojna vrednost stringa = %d\n", str, val);

    strcpy(str, "matematika");
    val = atoi(str);
    printf("\nUneti string = %s, Celobrojna vrednost stringa = %d\n", str, val);

    return 0;
}
