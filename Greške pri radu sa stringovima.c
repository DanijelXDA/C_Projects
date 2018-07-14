#include <stdio.h>

int main(void)
{
    // char string[10]; // Premala veličina za string!
    char string[200]; // Bug fix
    
    printf("\nUnesite neki tekst: ");
    gets(string); // Učitava se jedan red teksta

    printf("\nUneli ste sledeci tekst: ");
    puts(string); // Štampa se tekst na konzolu

    return 0;
}
