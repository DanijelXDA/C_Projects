#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argn, char **args)
{
    if(argn != 2)
        exit(1);
        
    unsigned sat, minut, i = 0, j = 0;
    char str[3] = "", min[3] = "";
    while(args[1][i] != ':')
    {
        str[j] = args[1][i];
        i++; j++;
    }
    str[j] = '\0';

    j = 0; i++;
    while(args[1][i] != '\0')
    {
        min[j] = args[1][i];
        i++; j++;
    }
    min[j] = '\0';

    sat = atoi(str);
    minut = atoi(min);

    printf("\n%s = %d minuta.\n", args[1], (sat * 60) + minut);

    return 0;
}
