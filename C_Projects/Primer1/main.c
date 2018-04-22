#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    printf("Unesite prirodan broj n:");
    scanf("%d", &n)

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            break;

    }

    if(i == n)
       printf("Uneseni broj je prost %d.", i);
    else
        printf("Uneseni broj nije prost %d.", i);



    return 0;
}
