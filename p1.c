#include <stdio.h>

int main(void)
{
    int i;
    char ime[25] = "Kristina";

    for(i = 0; i < 25; i++)
        printf("%c", ime[i]);

    return 0;
}

