#include <stdio.h>

int main(void)
{
    int  broj;
    int  *pok;
    int  **pokNaPok; // Pokazivač na pokazivač

    broj = 500;

    // Inicijalizume pokazivač sa adresom od promenljive
    pok = &broj;

    // Prosleđujemo adresu prvog pokazivača pomoću operatora &
    pokNaPok = &pok;

    // Ispis vrednosti
    printf("Vrednost promenljive broj = %d\n", broj);
    printf("Vrednost na koju pokazuje *pok = %d\n", *pok);
    printf("Vrednost na koju pokazuje **pokNaPok = %d\n", **pokNaPok);

    return 0;
}
