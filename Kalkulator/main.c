#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int broj;
    char op;
    float rezultat;

    printf("Unesite broj: ");
    scanf("%d", &broj);

    rezultat = broj;

    do {

        do {

            printf("\nUnesite operator(+, -, *, /): ");
            fflush(stdin);
            scanf("%c", &op);

        } while(op != '+' && op != '-' && op != '*' && op != '/' && op != '=');

        if(op != '=') {
            printf("\nUnesite broj: ");
            scanf("%d", &broj);

            switch(op) {
            case '+':
                rezultat += broj;
                break;

            case '-':
                rezultat -= broj;
                break;

            case '*':
                rezultat *= broj;
                break;

            case '/':
                rezultat /= broj;
                break;
            }

        }

    } while(op != '=');

    printf("\nRezultat je: %.2f\n", rezultat);
    return 0;
}
