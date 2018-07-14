#include <stdio.h>

void prepisi(int, int); // Prototip funkcije


int main(void)  {
    int a = 100;
    int b = 200;

    printf("Pre poziva funkcije prepisi(), vrednost a je: %d\n", a);
    printf("Pre poziva funkcije prepisi(), vrednost b je: %d\n\n", b);

    prepisi(a, b); // Pozivamo funkciju prepisi()
                   // Parametre prosleđujemo po vrednosti

    printf("Posle poziva funkcije prepisi(), vrednost a je: %d\n", a);
    printf("Posle poziva funkcije prepisi(), vrednost b je: %d\n", b);

    return 0;
}

void prepisi(int x, int y) { // Definicija naše funkcije prepisi()
    x = 500; // Radimo sa kopijama vrednosti
    y = 600; // Originali ostaju nepromenjeni!

    return;
}
