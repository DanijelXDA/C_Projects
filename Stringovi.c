#include <stdio.h>

int main(void)
{
    char string[100];

    printf("\nUnesite neki tekst: ");
    gets(string); // Učitava se jedan red teksta

    printf("\nUneli ste sledeci tekst: ");
    puts(string); // Štampa se tekst na konzolu

    return 0;
}
