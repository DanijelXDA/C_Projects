#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    do {

        printf("Unesite n: ");
        scanf("%d", &n);
    } while(n < 3 || n > 18);

    printf("Mogucnosti su: ");

    for(int i = 1; i <= 6; ++i)
        for(int j = 1; j <= i; ++j)
            for(int k = 1; k <= j; ++k) {
                if(i + j + k == n) {
                    printf("(%d, %d, %d) ", i, j, k);
                }
    }

    return 0;
}
