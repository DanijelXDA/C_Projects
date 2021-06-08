int main()
{
    int x;
    
    x ^= x; // sve bitove postavi na 0
    x = (x ^ ( (-1 ^ x) & (1U << 1) ) ) ^ ((-1 ^ x) & (1U << 3));    // x: 00000000000000000000000000001010

    x ^= x; // sve bitove postavi na 0
    x = (x ^ ( (-1 ^ x) & (1U << 30) ) ) ^ ((-1 ^ x) & (1U << 28));  // x: 01010000000000000000000000000000

    return 0;
}

