
#include <stdio.h>

int main(void) 
{  
    int broj1 = 5, broj2 = 15;  
    char znak;  
    
    printf("%d\n", broj1);    // Ispisaće se 5
    (broj1 < broj2 ) ? printf("%d\n", broj1) : printf("%d\n", broj2);  // Ispisaće se 5
    
    printf("%d\n", broj2);  // Ispisaće se 15 
    (broj2 == broj1) ? printf("%d\n", broj1) : printf("\n");  // Preći će u novi red
    
    znak = (broj2 == 0) ? 'A' : 'B' ;  // Ispisaće se B
    
    printf("%c\n", znak); 
 
    return 0; 
}
