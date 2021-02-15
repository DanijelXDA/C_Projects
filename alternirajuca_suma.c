/* npr 14375 je 1 - 4 + 3 - 7 + 5 = -2 */
#include <stdio.h>

int main(void)
{
    int niz[100], broj, n = 0, i, cifara = 1, tmp, suma;
    
    do {
        scanf("%d", &broj);
        niz[n] = broj;
        n++;
        if(broj < 0) {
            printf("-1"); 
            return -1;
        }
    } while(broj != 0 && n <= 100);
    
    
    for(i = 0; i < n - 1; i++) {
        suma = 0;
        
        tmp = niz[i];
        while(tmp != 0) {
            cifara++;
            tmp /= 10;
        }
        
        while(niz[i] != 0) {
            if(cifara % 2 == 0)
                suma += niz[i] % 10, cifara--;
            else
                suma -= niz[i] % 10, cifara--;
            niz[i] /= 10;
        }
        cifara = 1;
        printf("%d ", suma);
    }
    
    return 0;
}
