// Increments the value of an int outside of a function by one.

#include <stdio.h>

int increment_1(int *x)
{
   (*x)++;
   return 0;
}

int main()
{
   int x = 5;
   increment_1(&x);
   printf("x = %d\n", x);
   return 0;
}