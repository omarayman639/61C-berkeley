//The following functions work correctly (note: this does not mean intelligently),
// but have no comments. Document the code to prevent it from causing further confusion.

/* Returns the sum of the first n elements in an array. */
int foo(int *arr, size_t n)
{
   return n ? arr[0] + foo(arr + 1, n - 1) : 0;
}

/* Returns -1 times the number of zeroes in the first n elements in the array. */
int bar(int *arr, size_t n)
{
   int sum = 0, i;
   for (i = n; i > 0; i--)
   {
      sum += !arr[i - 1];
   }
   return ~sum + 1;
}

/* Does nothing. (does bitwise XOR operations on x and y but returns nothing) */
void baz(int x, int y)
{
   x = x ^ y;
   y = x ^ y;
   x = x ^ y;
}