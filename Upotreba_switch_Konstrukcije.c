#include <stdio.h>

int main(void)  {
    int ocena;    // Definicija lokalne promenljive

    printf("Unesite svoju ocenu: ");
    scanf("%d", &ocena);

    switch(ocena) { // Uvek mora biti int!
        case 1:
            printf("\nNedovoljan si...\n\tMozes ti to bolje!\n\n");
            break;
        case 2:
            printf("\nDovoljan si...\n\tJos malo se potrudi!\n\n");
            break;
        case 3:
            printf("\nDobar si...\n\tNije lose!\n\n");
            break;
        case 4:
            printf("\nVrlo dobar si....\n\tBravo uz malo truda mozes sve!\n\n");
            break;
        case 5:
            printf("\nOdlican si...\n\tSamo nastavi tako!\n\n");
            break;
        default:
            printf("\nNisi natprosecan ;)\n\tUneta ocena ne postoji!\n\n");
            break; // Nije obavezno
    }

    return 0;
}
