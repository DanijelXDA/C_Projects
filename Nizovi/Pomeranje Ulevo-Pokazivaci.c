#include <stdio.h>

#define MAX 30

int main(void)
{
    int n;

    int a[MAX], *m, p, i;

    do
    {
        printf("\nUnesite velicinu niza (max = %d): ", MAX);
        scanf("%d", &n);
    }while(n < 1 || n > MAX);

    printf("\n\nUnos elemenata niza:");

    for(m = a, i = 0; i < n - 1, m < a + n; i++, m++)
    {
        printf("\na[%d] = ", i);
        scanf("%d", m);

    }

    p = *(a + n - 1);

    for(m = a + n - 1; m > a; m--)
        *m = *(m - 1);

    *a = p;

    for(m = a, i = 0; i < n - 1, m < a + n; i++, m++)
        printf("\na[%d] = %d", i, *m);

    return 0;
}
