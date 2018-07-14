#include <stdio.h>

int stepen = 1; // Globalna promenljiva

void unosBroja(double *broj) {

    printf("\nUnesite jedan ceo broj: ");
    scanf("%lf", broj); // NE TREBA &broj, jer je broj pokazivać!

    do {
        printf("\nUnesite na koji stepen stepenujete broj: ");
        scanf("%d", &stepen);
    } while(stepen < 0); // Stepen ne može biti negativan
}

double stepenovanje(double broj, int stepen) {
    int i;
    double proizvod = 1; // Neutralan član pri množenju je 1

    for(i = 1; i <= stepen; i++)
        proizvod *= broj;

    return proizvod; // Vraćamo stepenovani broj
}

int main(void) {
    double broj; // Lokalna promenljiva

    unosBroja(&broj); // Prenos paramera po adresi

    printf("\n\t%d. stepen broja %.2lf iznosi: ", stepen, broj);
    printf(" %.2lf\n", stepenovanje(broj, stepen)); // Prenos parametra po vrednosti

    return 0;
}
