#include <ctype.h>
#include <stdio.h>
#include <string.h>

int GetPosition(char c)
{
   if (c >= 'a' && c <= 'z') {
      return c - 'a';
   }
   else if (c >= 'A' && c <= 'Z') {
      return c - 'A';
   }
   else  {
      // Indicate that it isn't a letter.
      return -1;
   }
}
