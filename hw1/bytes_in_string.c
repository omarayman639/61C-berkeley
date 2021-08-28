// prints the number of bytes in a string

#include <stdio.h>

int bytes_in_string(char x[])
{
   int i = 0;
   int count = 0;
   while (x[i] != 0)
   {
      count++;
      i++;
   }
   return count;
}

int main()
{
   char str[] = "test string";
   printf("bytes in string is %d\n", bytes_in_string(str));
   return 0;
}