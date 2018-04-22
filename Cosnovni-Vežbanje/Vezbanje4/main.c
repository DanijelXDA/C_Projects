#include <stdio.h>

int main()
{
    int a, b;

    printf("Unesite dva  broja: ");
    scanf("%d %d", &a, &b);

    if(a >= b)
        printf("Maksimum unetih brojeva je %d", a);
    else
        printf("Maksimum unetih brojeva je %d", b);

    return 0;
}
