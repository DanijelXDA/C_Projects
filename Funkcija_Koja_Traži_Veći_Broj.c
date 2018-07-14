#include <stdio.h>

void veciBroj(int prviBroj, int drugiBroj) { // Definicija naše funkcije

    if(prviBroj > drugiBroj)
        printf("\nBroj %d je veci od broja %d.\n", prviBroj, drugiBroj);
    else if(x == y)
        printf("\nBrojevi su jednaki.\n");
    else
        printf("\nBroj %d je veci od broja %d.\n", drugiBroj, prviBroj);

    return; // Može se izostaviti jer je tip povratne vrednosti naše funkcije void
}

int main(void)  {
    int prviBroj, drugiBroj; // Definicija lokalnih promenljivih

    printf("Unesite dva cela broja: ");
    scanf("%d %d", &prviBroj, &drugiBroj);

    // Poziv funkcije koja određuje koji je od dva broja veći
    veciBroj(prviBroj, drugiBroj);

    return 0;
}
