#include <stdio.h>

int main(void)  {
    int i, n; // Definicija lokalne promenljive

    printf("Unesite neki ceo broj: ");
    scanf("%d", &n);

    // Program koji ispisuje brojeve od 1 do n
    //Pomoću for petlje
    printf("\nIspis brojeva od 1 do %d:", n);
    for(i = 1; i <= n; i++)
        printf(" %d", i);
    printf("\n");

    return 0;
}
