
//Swaps the value of two ints outside of  a function. s

#include <stdio.h>

int swap_ints(int *x, int *y)
{
   int temp = *x;
   *x = *y;
   *y = temp;
   return 0;
}

int main()
{
   int x = 2;
   int y = 3;

   swap_ints(&x, &y);
   printf("x = %d\n", x);
   printf("y = %d\n", y);
   return 0;
}
