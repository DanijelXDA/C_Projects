#include <stdio.h>
#include "Trougao.h"

int main()
{
    float a, b;

    printf("\nUnesite katete trougla: ");
    scanf("%f %f", &a, &b);

    printf("c = %.2f\n", hipotenuza(a, b));
    printf("P = %.2f\n", povrsina(a, b));
    printf("O = %.2f\n", obim(a, b));

    return 0;
}
