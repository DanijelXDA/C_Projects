#include <stdio.h>
#include <string.h>
#include <ctype.h>

void updown(char *s)
{
   int i;
   int len = strlen(s);

   for(i = 0; i < len; i++) {
       if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = tolower(s[i]);
       else if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = toupper(s[i]);
   }
}


int main()
{
    char s1[100];
   
    printf("Unesite jedan string\n>> ");
    gets(s1);
    
    updown(s1);
    
    puts(s1);
    
    return 0;
}
