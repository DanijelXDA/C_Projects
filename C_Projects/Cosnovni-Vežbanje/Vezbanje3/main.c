#include <stdio.h>

int main()
{
    int n;
    printf("Unesite broj n :");
    scanf("%i", &n);
     if (n % 3 == 0)
     printf("Uneseni broj je deljiv sa 3");
     else
        printf("Uneseni broj nije deljiv sa 3");


    return 0;
}
