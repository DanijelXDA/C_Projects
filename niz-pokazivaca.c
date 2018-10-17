#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *nizPokNaInt[10];
    int niz[10];

    for(i = 0; i < 10; i++)
        nizPokNaInt[i] = &niz[i];

    for(i = 0; i < 10; i++)
        printf("%p ", nizPokNaInt[i]);


    return 0;
}
