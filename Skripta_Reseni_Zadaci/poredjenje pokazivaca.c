#include <stdio.h>
#define MAX 5

int main(void)
{
    int  niz[] = {10, 100, 200, 300, 500};
    int  i = 0, *pok;

    for(pok = niz; pok < &niz[MAX]; pok++)
    {
        printf("Adresa od niz[%d] = %x\n", i, pok );
        printf("Vrednost niz[%d] = %d\n\n", i, *pok );

        i++;
    }

    return 0;
}

/* v2
#include <stdio.h>

int main(void)
{
    int *p1, *p2;
    int broj = 5;

    p1 = &broj;
    p2 = p1;

    if(p1 == p2)
        printf("Pokazujemo na istu vrednost.\n");
    else
        printf("Razliciti smo.\n");

    return 0;
}

*/
