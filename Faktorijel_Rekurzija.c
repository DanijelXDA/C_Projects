#include <stdio.h>

int faktorijel(int); // Prototup funkcije faktorijel()

int main(void) {
    int n;

    do {
        printf("Unesite broj n: ");
        scanf("%d", &n);
    } while(n < 0); // Broj mora biti pozitivan

    printf("\n\nFaktorijel:  %d! = %d\n", n, faktorijel(n));

    return 0;
}

int faktorijel(int n) { // Rekurzivna funkcija
    if(n <= 1)
        return 1;
    else
        return n * faktorijel(n - 1);
}
