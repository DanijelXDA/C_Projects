#include <stdio.h>

float prosekOcena(int *, int); // Prototip funkcije

int main(void)
{
    int i, velNiza, ocene[50];

    printf("Unesite koliko ocena unosite: ");
    scanf("%d", &velNiza);

    for(i = 0; i < velNiza; i++)
    {
        printf("\tUnesite %d. ocenu = ", i + 1);
        scanf("%d", ocene + i);
    }
    printf("\nProsek ocena je: %.2f\n", prosekOcena(ocene, velNiza));

    return 0;
}

float prosekOcena(int *niz, int velicinaNiza)
{
    int i;
    float prosek = 0.0;

    for(i = 0; i < velicinaNiza; i++)
        prosek += *(niz + i);

    return (prosek / velicinaNiza);
}
