#include <stdio.h>
#define Pi 3.14159 // Definisanje globalne konstante Pi

int main(void)
{
    double r, o; // Promenljive koje su nam potrebne za rad programa
    
    printf("Unesite poluprecnik r = "); // Poruka korisniku da unese poluprecnik kruga
    scanf("%lf", &r); // Cuvanje unosa u promenljivu r

    o = 2. * r * Pi; // Racunanje obima kruga
    
    printf("\n\nObim iznosi: %lf", o); // Ispis obima kruga na konzolu

    return 0;
}
