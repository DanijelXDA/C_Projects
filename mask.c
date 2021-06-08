#define print_bits(x)                                            \
  do {                                                           \
    unsigned long long a__ = (x);                                \
    size_t bits__ = sizeof(x) * 8;                               \
    printf(#x ": ");                                             \
    while (bits__--) putchar(a__ &(1ULL << bits__) ? '1' : '0'); \
    putchar('\n');                                               \
  } while (0)
  
// ovo gore je samo makro da ti ispiše bitove, možeš obrisati

#include <stdio.h>

int main()
{
    int x;
    
    x ^= x; // sve bitove postavi na 0
    print_bits(x); // # ako obrišeš ono gore možeš i ovo, služi samo da vidiš šta si uradio
    
    x ^= (-1 ^ x) & (1U << 1);  // drugi bit postavi na 1
    x ^= (-1 ^ x) & (1U << 3);  // ćetvrti bit postavi na 1
    print_bits(x); // # ako obrišeš ono gore možeš i ovo, služi samo da vidiš šta si uradio
    
    printf("\n");
    // ovo je sa početka da ide setovanje
    x ^= x; // sve bitove postavi na 0
    print_bits(x); // # ako obrišeš ono gore možeš i ovo, služi samo da vidiš šta si uradio
    
    x ^= (-1 ^ x) & (1U << 30);  // drugi bit postavi na 1
    x ^= (-1 ^ x) & (1U << 28);  // ćetvrti bit postavi na 1
    print_bits(x); // # ako obrišeš ono gore možeš i ovo, služi samo da vidiš šta si uradio
    
    return 0;
}