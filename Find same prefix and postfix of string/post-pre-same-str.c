#include <stdio.h>
#include <string.h>

int main()
{
   char str[101];
   scanf("%s", str);

   int n = strlen(str);

   int length = 0, i = n/2;
   if( n < 2 )
      return 1;

   while( str[i] != '\0' ){
      if (str[i] == str[length])
	  {
         ++length;
         ++i;
      } else	  
         if(length == 0)
            ++i;
         else
            --length;
   }
   i = 0;
   while(i < length)
	putchar(str[i]), i++;

   return 0;
}
