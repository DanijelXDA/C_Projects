#include <stdio.h>
#define Pi 3.14159 // Definisanje globalne konstante Pi

int main(void)
{
    double r, o, p; // Promenljive koje su nam potrebne za rad programa

    printf("Unesite poluprecnik r = "); // Poruka korisniku da unese poluprecnik
    scanf("%lf", &r); // Cuvanje unosa u promenljivu r

    o = 2. * r * Pi; // Racunanje obima kruga
    p = r * r * Pi; // Racunanje povrsine krugs

    printf("\n\nObim iznosi: %.3lf", o); // Ispis obima kruga na konzolu
    printf("\nPovrsina iznosi: %.3lf\n", p); // Ispis povrsine kruga na konzolu

    return 0;
}
