#include <stdio.h> // Pretprocesorska direktiva

int main(void) // Glavna funkcija programa
{
    float a, b, p = 1, o = 0; // Promenljive za čuvanje stranica, površine i obima pravogaonika

    printf("Unesite stranicu a: "); // Ispis poruke na konzolu
    scanf("%f", &a);                // Čuvanje unete vrednosti u promenljivu

    printf("Unesite stranicu b: "); // Ispis poruke na konzolu
    scanf("%f", &b);                // Čuvanje unete vrednosti u promenljivu

    p = a * b; // Računanje površine pravougaonika
    o = (2 * a) + (2 * b); // Računanje obima pravougaonika

    printf("\nPovrsina pravougaonika stranica: \n\ta = %.2fcm\n\tb = %.2fcm\n", a, b); // Ispis poruke na konzolu
    printf("\nIznosi: %.2fcm^2, a obim: %.2fcm.\n", p, o);  // Ispis poruke na konzolu

    return 0;
}
