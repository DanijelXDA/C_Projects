#include <stdio.h>

int main(void) {
    int var;
    int *pokazivacNaInt;
    int val;

    var = 500;

    // Uzmi adresu od var
    pokazivacNaInt = &var;

    // Prepiši sadržaj iz pokazivača u promenljivu val
    val = *pokazivacNaInt;

    printf("Vrednost promenljive var: %d\n", var);
    printf("Vrednost pokazivaca: %p\n", pokazivacNaInt);
    printf("Vrednost val: %d\n", val);

    return 0;
}
