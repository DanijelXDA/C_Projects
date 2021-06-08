int main()
{
    char x = 1; // bzvz broj // char ima 8 bitova
    x = (x ^ 1 << 0) ^ (x ^ 1 << 2) ^ (x ^ 1 << 4) ^ (x ^ 1 << 6) ^ (x ^ 1 << 8);
    return 0;
}