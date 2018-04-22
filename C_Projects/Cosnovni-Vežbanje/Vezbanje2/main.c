#include <stdio.h>


int main()
{
    int n;
    printf("Unesite broj :");
    scanf("%i", &n);

    if(n % 2 == 0)
        printf("Broj koji ste uneli je paran");
    else
        printf("Broj koji ste uneli je neparan");


    return 0;
}
