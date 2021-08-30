//The following code segments may contain logic and syntax errors.
//Find and correct them.

/* Returns the sum of all the elements in SUMMANDS. */
int sum(int *summands)
{ // int sum(int* summands, unsigned int n) {
   int sum = 0;
   for (int i = 0; i < sizeof(summands); i++) // for (int i = 0; i < n; i++)
      sum += *(summands + i);
   return sum;
}

/* Increments all the letters in the string STRING, held in an array of length N.
* Does not modify any other memory which has been previously allocated. */
void increment(char *string, int n)
{
   for (int i = 0; i < n; i++) // for (i = 0; string[i] != 0; i++)
      *(string + i)++;         // string[i]++; or (*(string + i))++;
   // consider the corner case of incrementing 0xFF
}

/* Copies the string SRC to DST. */
void copy(char *src, char *dst)
{
   while (*dst++ = *src++)
      ;
}
// This code has no errors.
