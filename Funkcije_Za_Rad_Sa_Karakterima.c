#include <stdio.h> 

int main(void) {   
    int c; 
 
    printf("Unesite jedan znak: ");
    c = getchar();  // Funkcija koja učitava jedan znak
 
    printf("\nUneli ste: ");   
    putchar(c); // Funkcija koja ispisuje jedan znak na ekran
 
    return 0; 
} 
