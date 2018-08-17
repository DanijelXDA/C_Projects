#include <stdio.h>

int main(void)
{
    int  var = 55;   /* Aktuelna deklaracija promenljive */
    int  *ip;        /* Deklaracija pokazivačke promenljive */

    ip = &var;  /* Sačuvaj adresu promenljive var u pokazivač */

    printf("Adresa promenljive var ima vrednost: %x\n", &var  );

    /* Adresa koja je smeštena u pokazivačkoj promenljivi */
    printf("Adresa koja je smestena u pokazivackoj promenljivi ip je: %x\n", ip);

    /* Pristup vrednosti pomoću pokazivača */
    printf("Vrednost na koju pokazuje pokazivac *ip je: %d\n", *ip);

    return 0;
}
