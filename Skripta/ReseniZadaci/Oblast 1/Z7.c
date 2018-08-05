#include <stdio.h> // Pretprocesorska direktiva

int main(void) // Glavna funkcija programa
{
    double kolNovca, kamatnaStopa, profit;

    printf("Unesite kolicinu novca koji ostavljate u banci: "); // Ispis na konzolu
    scanf("%lf", &kolNovca); // Cuvanje u lokalnu promenljivu

    printf("\nUnesite kamatnu stopu na mesecnom nivou (npr. 5.26, u %): "); // Ispis na konzolu
    scanf("%lf", &kamatnaStopa); // Cuvanje u lokalnu promenljivu

    profit = (kolNovca * (kamatnaStopa / 100)) * 12; // Racunamo tako sto izracunamo koliko na mesecnom nivou
                                                     // dobijemo novca za datu kamatnu stopu i to sve puta 12 meseci

    printf("\n\nZa godinu dana od kamate dobicemo %.3lf RSD.\n", profit);  // Ispis na konzolu
    printf("Za godinu dana od kamate dobicemo %.5lf RSD.\n", profit);  // Ispis na konzolu

    return 0;
}
