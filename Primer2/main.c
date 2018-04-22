#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, cifra1, cifra2;

    for (i = 10; i <= 99; i++)
    {
        if (i % 3 == 0)
            continue;


    cifra1 = i / 10;
    cifra2 = i % 10;
    printf("Zbir cifara broja %d je %d.\n", i, cifra1 + cifra2);


    }

    return 0;
}
