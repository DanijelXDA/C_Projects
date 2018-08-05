#include <stdio.h> // Pretprocesorska direktiva

int main(void) // Glavna funkcija programa
{
    float sirinaLista, visinaLista, povrsinaLista;

    printf("Unesite sirinu lista u mm: "); // Ispis na konzolu
    scanf("%f", &sirinaLista);             // Učitavanje unete vrednosti u lokalnu promenljivu

    printf("Unesite visinu lista u mm: "); // Ispis na konzolu
    scanf("%f", &visinaLista);             // Učitavanje unete vrednosti u lokalnu promenljivu

    povrsinaLista = sirinaLista * visinaLista; // Površina pravougaonika po formuli je a * b

    printf("\nPovrsina lista papira iznosi: %.4f mm^2.\n", povrsinaLista); // Ispis na konzolu

    return 0;
}
