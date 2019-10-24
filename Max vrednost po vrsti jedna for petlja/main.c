#include <stdio.h>
#define MAX_M 10

int main(void)
{
    int A[MAX_M][MAX_M];
    int i, j, n, m;

    do {
        printf("\nUnesite n(2-10)\n>> ");
        scanf("%d", &n);
    } while(n < 2 || n > 10);

    do {
        printf("\nUnesite m(2-10)\n>> ");
        scanf("%d", &m);
    } while(m < 2 || m > 10);

    printf("\nUnos elemenata matrice\n>> ");
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            scanf("%d", &A[i][j]);

    /// Niz za cuvanje najveceg elementa iz vrste
    int mx[n]; /// velicine n
    int max = A[0][0];

    i = 0;
    provera:
    max = A[i][0]; ///  bugfix #12
    if(i < n) {
        for(j = 0; j < m; j++)
            if( A[i][j] > max)
                max = A[i][j];

        mx[i] = max;
        i++;
        goto provera;
    }

    printf("\nPrikaz matrice\n");
    for(i = 0; i < n; i++) {
        printf("\n\n");
        for(j = 0; j < m; j++)
            printf("\t%d", A[i][j]);
    }
    printf("\n\n");

    printf("\nPrikaz najveceg elementa po vrsti\n>> ");
        for(i = 0; i < n; i++)
            printf("%d ", mx[i]);

    printf("\n\n");

    return 0;
}
