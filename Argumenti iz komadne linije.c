#include <stdio.h>

int main( int argc, char *argv[] )
{
    if( argc == 2 )
    {
        printf("\nUneli ste sledeci argument: %s\n", argv[1]);
    }
    else if( argc > 2 )
    {
        printf("\nUneli ste previse argumenata.\n");
    }
    else
    {
        printf("\nOcekuje se makar jedan argument.\n");
    }

    getchar();

    return 0;
}
