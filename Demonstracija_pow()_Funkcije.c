#include <stdio.h>
#include <math.h>

int main(void)  {
    double broj;

    printf("Unesite broj koji bi da kvadrirate: ");
    scanf("%lf", &broj);

    // Koristimo sistemsku funkciju pow() koja stepenuje prosleđeni parametar
    printf("\n\nKvadrat broja %.2lf je %.2lf\n", broj, pow(broj, 2));

    return 0;
}
