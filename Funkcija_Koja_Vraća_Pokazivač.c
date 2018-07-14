#include <stdio.h>
#include <stdlib.h>

// Funkcija koja generiše i vraća slučajan broj
int *slucajanBroj(void) {
    int slucajanBroj, n, *p = &slucajanBroj;

    printf("\nUnesite neki ceo broj: ");
    scanf("%d", &n);

    srand(n); // Podešavanje seed-a rand() funkcije
    slucajanBroj = rand();

    return p; // Vraćamo pokazivač
}

// Glavna (main) funkcija
int main(void) {
    int *p; // Pokazivač na ceo broj (int)

    p = slucajanBroj();

    printf("\nSlucajan broj %d\n", *p);

    return 0;
}
