#include <stdio.h>
#define SIRINA 15 // Definisanje konstante pomoću pretprocesorske direktive

int main(void) {
    const int  DUZINA = 10; // Definisanje konstante pomoću naredbe const

    printf("Duzina iznosi: %d cm, a sirina: %d cm\n", DUZINA, SIRINA);

   return 0;
}
