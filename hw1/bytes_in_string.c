
#include <stdio.h>

// int bytes_in_string(char *x[])
// {
// }

int main()
{
   char x[] = "test string";
   int count = 0;
   int i = 0;

   while (x[i] != 0)
   {
      count++;
      i++;
   }
   printf("the string '%s' has %d bytes\n", x, count);
   return 0;
}