#include <stdio.h>
#include <stdlib.h>

int strl(char str[])
{
   unsigned i = 0;
   while(str[i] != '\0') { ++i; }
   return i;
}

int count(const char str[], const char t)
{
  int i, len = strl(str), app = 0;

  for(i = 0; i < len; i++)
       if(str[i] == t)
          app++;
    
    return app;
}

int main(void)
{
    char str[100], karakter;
    
    fflush(stdin);
    
    printf("\nUnesi string\n>> ");
    scanf("%[^\n]s", str);
    
    printf("\nUnesi jedan karakter\n>> ");
    scanf(" %c", &karakter);
    
    int br = count(str, karakter);
    
    if(!br)
       printf("\n%c se ne pojavljuje u stringu\n", karakter);
    else
       printf("\n%c se pojavljuje %i puta.\n", karakter, br);
    
    return 0;
}
