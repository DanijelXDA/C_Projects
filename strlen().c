#include <stdio.h>
#include <string.h> // Biblioteka za rad sa stringovima

int main(void) {
    char string[] = "Programiranje";
    printf("\nDuzina stringa %s je %d\n", string, strlen(string));
    // Funkcija strlen() se nalazi u zaglavlju string.h
    return 0;
}
